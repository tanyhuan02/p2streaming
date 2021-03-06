//
// uri.hpp
// ~~~~~~~
//
// Copyright (c) 2009 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// path LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef URL_URI_HPP
#define URL_URI_HPP

#include "p2engine/push_warning_option.hpp"
#include "p2engine/config.hpp"
#include <cstdio>
#include <cstdlib>
#include <string>
#include <map>
#include "p2engine/pop_warning_option.hpp"


namespace p2engine {

	/// The class @c url enables parsing and accessing the components of URLs.
	/**
	* @par Example
	* To extract the components of a URL:
	* @code
	* urdl::url url("http://user:pass@host:1234/dir/page?param=0#anchor");
	* std::cout << "Protocol: " << url.protocol() << std::endl;
	* std::cout << "User Info: " << url.user_info() << std::endl;
	* std::cout << "Host: " << url.host() << std::endl;
	* std::cout << "Port: " << url.port() << std::endl;
	* std::cout << "Path: " << url.path() << std::endl;
	* std::cout << "Query: " << url.query() << std::endl;
	* std::cout << "Fragment: " << url.fragment() << std::endl;
	* @endcode
	* The above code will print:
	* @code
	* Protocol: http
	* User Info: user:pass
	* Host: host
	* Port: 1234
	* Path: /dir/page
	* Query: param=0
	* Fragment: anchor
	* @endcode
	*
	* @par Requirements
	* @e Header: @c <urdl/url.hpp> @n
	* @e Namespace: @c urdl
	*/
	class uri
	{
	public:
		/// Constructs an object of class @c url.
		/**
		* @par Remarks
		* Postconditions: @c protocol(), @c user_info(), @c host(), @c path(), 
		* @c query(), @c fragment() all return an empty string, and @c port() returns
		* 0.
		*/
		uri()
			: ipv6_host_(false)
		{
		}

		/// Constructs an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @throws boost::system::system_error Thrown when the URL string is invalid.
		*/
		uri(const char* s, error_code& ec)
			: ipv6_host_(false)
		{
			from_string(*this, s, ec);
			if (ec)clear();
		}

		/// Constructs an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @throws boost::system::system_error Thrown when the URL string is invalid.
		*/
		uri(const std::string& s, error_code& ec)
			: ipv6_host_(false)
		{
			from_string(*this, s.c_str(), ec);
			if (ec)clear();
		}

		void clear();

		/// Gets the protocol component of the URL.
		/**
		* @returns A string specifying the protocol of the URL. Examples include
		* @c http, @c https or @c file.
		*/
		const std::string& protocol() const
		{
			return protocol_;
		}
		void protocol(const std::string& protocolStr)
		{
			protocol_ = protocolStr;
		}

		/// Gets the user info component of the URL.
		/**
		* @returns A string containing the user info of the URL. Typically in the
		* format <tt>user:password</tt>, but depends on the protocol.
		*/
		const std::string& user_info() const
		{
			return user_info_;
		}
		void user_info(const std::string& userInfoStr)
		{
			if (user_info_ == userInfoStr) return;
			user_info_ = userInfoStr;
			parse_user_info(user_info_, user_name_, user_password_);
		}

		/// Gets the user info component of the URL.
		/**
		* @returns A string containing the user info of the URL. Typically in the
		* format <tt>user</tt>, but depends on the protocol.
		*/
		const std::string& user_name() const
		{
			return user_name_;
		}
		void user_name(const std::string& usr)
		{
			if (usr == user_name_) return;
			user_name_ = usr;
			combine_user_info(user_name_, user_password_, user_info_);
		}

		/// Gets the user info component of the URL.
		/**
		* @returns A string containing the user info of the URL. Typically in the
		* format <tt>password</tt>, but depends on the protocol.
		*/
		const std::string& user_password() const
		{
			return user_password_;
		}

		void user_password(const std::string& pwd)
		{
			if (user_password_ == pwd) return;
			user_password_ = pwd;
			combine_user_info(user_name_, user_password_, user_info_);
		}

		/// Gets the host component of the URL.
		/**
		* @returns A string containing the host name of the URL.
		*/
		const std::string& host() const
		{
			return host_;
		}
		void host(const std::string& str)
		{
			host_ = str;
		}

		/// Gets the port component of the URL.
		/**
		* @returns The port number of the URL.
		*
		* @par Remarks
		* If the URL string did not specify a port, and the protocol is one of @c
		* http, @c https or @c ftp, an appropriate default port number is returned.
		*/
		unsigned short port() const;
		void port(unsigned short n)
		{
			char buf[32] = { 0 };
			snprintf(buf, sizeof(buf) - 1, "%d", n);
			port_ = buf;
		}

		/// Gets the path component of the URL.
		/**
		* @returns A string containing the path of the URL.
		*
		* @par Remarks
		* The path string is unescaped. To obtain the path in escaped form, use
		* @c to_string(url::path_component).
		*/
		std::string path() const
		{
			std::string tmp_path;
			unescape_path(path_, tmp_path);
			return tmp_path;
		}
		void path(const std::string& str)
		{
			path_ = str;
		}

		/// Gets the query component of the URL.
		/**
		* @returns A string containing the query string of the URL.
		*
		* @par Remarks
		* The query string is not unescaped, but is returned in whatever form it
		* takes in the original URL string.
		*/
		const std::string& query() const
		{
			return query_;
		}
		void query(const std::string& q)
		{
			if (q == query_)return;
			parse_query(q.c_str(), &query_, query_map_);
		}

		std::map<std::string, std::string>& query_map()
		{
			return query_map_;
		}
		const std::map<std::string, std::string>& query_map()const
		{
			return query_map_;
		}
		void query_map(const std::string& k, const std::string& v)
		{
			query_map_[k] = v;
			combine_query(query_map_, query_);
		}

		/// Gets the fragment component of the URL.
		/**
		* @returns A string containing the fragment of the URL.
		*/
		const std::string& fragment() const
		{
			return fragment_;
		}
		void fragment(std::string& str)
		{
			fragment_ = str;
		}

		/// Components of the URL, used with @c from_string.
		enum components_type
		{
			protocol_component = 1, 
			user_info_component = 2, 
			host_component = 4, 
			port_component = 8, 
			path_component = 16, 
			query_component = 32, 
			fragment_component = 64, 
			all_components = protocol_component | user_info_component | host_component
			| port_component | path_component | query_component | fragment_component
		};

		/// Converts an object of class @c url to a string representation.
		/**
		* @param components A bitmask specifying which components of the URL should
		* be included in the string. See the @c url::components_type enumeration for
		* possible values.
		*
		* @returns A string representation of the URL.
		*
		* @par Examples
		* To convert the entire URL to a string:
		* @code
		* std::string s = url.to_string();
		* @endcode
		* To convert only the host and port number into a string:
		* @code
		* std::string s = url.to_string(
		*     urdl::url::host_component
		*     | urdl::url::port_component);
		* @endcode
		*/
		std::string to_string(int components = all_components) const;

		/// Converts a string representation of a URL into an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @returns A @c url object corresponding to the specified string.
		*
		* @throws boost::system::system_error Thrown when the URL string is invalid.
		*/
		bool from_string(const char* s);

		/// Converts a string representation of a URL into an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @param ec Error code set to indicate the reason for failure, if any.
		*
		* @returns A @c url object corresponding to the specified string.
		*/
		bool from_string(const char* s, error_code& ec);

		/// Converts a string representation of a URL into an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @returns A @c url object corresponding to the specified string.
		*
		* @throws boost::system::system_error Thrown when the URL string is invalid.
		*/
		bool from_string(const std::string& s)
		{
			return from_string(s.c_str());
		}

		/// Converts a string representation of a URL into an object of class @c url.
		/**
		* @param s URL string to be parsed into its components.
		*
		* @param ec Error code set to indicate the reason for failure, if any.
		*
		* @returns A @c url object corresponding to the specified string.
		*/
		bool from_string(const std::string& s, error_code& ec)
		{
			return from_string(s.c_str(), ec);
		}

		/// Compares two @c url objects for equality.
		friend  bool operator==(const uri& a, const uri& b);
		/// Compares two @c url objects for inequality.
		friend  bool operator!=(const uri& a, const uri& b)
		{
			return !(a == b);
		}
		/// Compares two @c url objects for ordering.
		friend  bool operator<(const uri& a, const uri& b);
		friend  bool operator>(const uri& a, const uri& b)
		{
			return b<a;
		}
		friend  bool operator<=(const uri& a, const uri& b)
		{
			return !(b<a);
		}
		friend  bool operator>=(const uri& a, const uri& b)
		{
			return !(a<b);
		}

		// normalize the path element of the url:
		//  - a//b    -> a/b
		//  - a/./b   -> a/b
		//  - a/../b  -> b
		//  - /../a   -> a
		//  - ../a/.. -> ../
		//  - a/b/..  -> a/
		//  - a/b/.   -> a/b/
		static std::string normalize(const std::string& s);
		static std::string normalize(const char* in, size_t len);
		static std::string normalize(const char* in)
		{
			return normalize(in, strlen(in));
		}

		static bool is_uri_char(int c);
		static bool is_escaped(const std::string& s);
		static std::string escape(const char *src, bool space_to_plus = false);
		static std::string escape(const std::string&src, bool space_to_plus = false)
		{
			return escape(src.c_str(), space_to_plus);
		}

	private:
		static bool unescape_path(const std::string& in, std::string& out);
		static void from_string(uri& result, const char* p, error_code& ec);
		static void parse_user_info(const std::string&userInfo, std::string& userName, std::string& pwd);
		static void combine_user_info(const std::string& userName, const std::string& pwd, std::string&userInfo);
		static error_code parse_query(const char* q, std::string*outQuery, std::map<std::string, std::string>& qmap);
		static error_code combine_query(const std::map<std::string, std::string>& qmap, std::string& q);

	private:
		std::map<std::string, std::string> query_map_;
		std::string protocol_;
		std::string user_info_;
		std::string user_name_;
		std::string user_password_;
		std::string host_;
		std::string port_;
		std::string path_;
		std::string query_;
		std::string fragment_;
		bool ipv6_host_;
	};

} // namespace url

#endif // P2ENGINE_URL_HPP
