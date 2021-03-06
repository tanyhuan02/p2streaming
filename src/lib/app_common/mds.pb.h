// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mds.proto

#ifndef PROTOBUF_mds_2eproto__INCLUDED
#define PROTOBUF_mds_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace alive {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mds_2eproto();
void protobuf_AssignDesc_mds_2eproto();
void protobuf_ShutdownFile_mds_2eproto();

class mds_Alive;
class shunt_Alive;

// ===================================================================

class mds_Alive : public ::google::protobuf::MessageLite {
 public:
  mds_Alive();
  virtual ~mds_Alive();

  mds_Alive(const mds_Alive& from);

  inline mds_Alive& operator=(const mds_Alive& from) {
    CopyFrom(from);
    return *this;
  }

  static const mds_Alive& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const mds_Alive* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(mds_Alive* other);

  // implements Message ----------------------------------------------

  mds_Alive* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const mds_Alive& from);
  void MergeFrom(const mds_Alive& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required bytes id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const void* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required int32 channel_bitrate = 3;
  inline bool has_channel_bitrate() const;
  inline void clear_channel_bitrate();
  static const int kChannelBitrateFieldNumber = 3;
  inline ::google::protobuf::int32 channel_bitrate() const;
  inline void set_channel_bitrate(::google::protobuf::int32 value);

  // required int32 out_kbps = 4;
  inline bool has_out_kbps() const;
  inline void clear_out_kbps();
  static const int kOutKbpsFieldNumber = 4;
  inline ::google::protobuf::int32 out_kbps() const;
  inline void set_out_kbps(::google::protobuf::int32 value);

  // required int32 client_count = 5;
  inline bool has_client_count() const;
  inline void clear_client_count();
  static const int kClientCountFieldNumber = 5;
  inline ::google::protobuf::int32 client_count() const;
  inline void set_client_count(::google::protobuf::int32 value);

  // required float p2p_efficient = 6;
  inline bool has_p2p_efficient() const;
  inline void clear_p2p_efficient();
  static const int kP2PEfficientFieldNumber = 6;
  inline float p2p_efficient() const;
  inline void set_p2p_efficient(float value);

  // optional float playing_quality = 7;
  inline bool has_playing_quality() const;
  inline void clear_playing_quality();
  static const int kPlayingQualityFieldNumber = 7;
  inline float playing_quality() const;
  inline void set_playing_quality(float value);

  // optional float global_remote_to_local_lost_rate = 8;
  inline bool has_global_remote_to_local_lost_rate() const;
  inline void clear_global_remote_to_local_lost_rate();
  static const int kGlobalRemoteToLocalLostRateFieldNumber = 8;
  inline float global_remote_to_local_lost_rate() const;
  inline void set_global_remote_to_local_lost_rate(float value);

  // @@protoc_insertion_point(class_scope:alive.mds_Alive)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_channel_bitrate();
  inline void clear_has_channel_bitrate();
  inline void set_has_out_kbps();
  inline void clear_has_out_kbps();
  inline void set_has_client_count();
  inline void clear_has_client_count();
  inline void set_has_p2p_efficient();
  inline void clear_has_p2p_efficient();
  inline void set_has_playing_quality();
  inline void clear_has_playing_quality();
  inline void set_has_global_remote_to_local_lost_rate();
  inline void clear_has_global_remote_to_local_lost_rate();

  ::std::string* id_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 channel_bitrate_;
  ::google::protobuf::int32 out_kbps_;
  ::google::protobuf::int32 client_count_;
  float p2p_efficient_;
  float playing_quality_;
  float global_remote_to_local_lost_rate_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mds_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mds_2eproto();
  #endif
  friend void protobuf_AssignDesc_mds_2eproto();
  friend void protobuf_ShutdownFile_mds_2eproto();

  void InitAsDefaultInstance();
  static mds_Alive* default_instance_;
};
// -------------------------------------------------------------------

class shunt_Alive : public ::google::protobuf::MessageLite {
 public:
  shunt_Alive();
  virtual ~shunt_Alive();

  shunt_Alive(const shunt_Alive& from);

  inline shunt_Alive& operator=(const shunt_Alive& from) {
    CopyFrom(from);
    return *this;
  }

  static const shunt_Alive& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const shunt_Alive* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(shunt_Alive* other);

  // implements Message ----------------------------------------------

  shunt_Alive* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const shunt_Alive& from);
  void MergeFrom(const shunt_Alive& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const void* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required int32 kbps = 2;
  inline bool has_kbps() const;
  inline void clear_kbps();
  static const int kKbpsFieldNumber = 2;
  inline ::google::protobuf::int32 kbps() const;
  inline void set_kbps(::google::protobuf::int32 value);

  // required bool is_connected = 3;
  inline bool has_is_connected() const;
  inline void clear_is_connected();
  static const int kIsConnectedFieldNumber = 3;
  inline bool is_connected() const;
  inline void set_is_connected(bool value);

  // optional int32 pid = 4;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 4;
  inline ::google::protobuf::int32 pid() const;
  inline void set_pid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:alive.shunt_Alive)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_kbps();
  inline void clear_has_kbps();
  inline void set_has_is_connected();
  inline void clear_has_is_connected();
  inline void set_has_pid();
  inline void clear_has_pid();

  ::std::string* id_;
  ::google::protobuf::int32 kbps_;
  bool is_connected_;
  ::google::protobuf::int32 pid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mds_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mds_2eproto();
  #endif
  friend void protobuf_AssignDesc_mds_2eproto();
  friend void protobuf_ShutdownFile_mds_2eproto();

  void InitAsDefaultInstance();
  static shunt_Alive* default_instance_;
};
// ===================================================================


// ===================================================================

// mds_Alive

// required int32 type = 1;
inline bool mds_Alive::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void mds_Alive::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void mds_Alive::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void mds_Alive::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 mds_Alive::type() const {
  return type_;
}
inline void mds_Alive::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// required bytes id = 2;
inline bool mds_Alive::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void mds_Alive::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void mds_Alive::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void mds_Alive::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& mds_Alive::id() const {
  return *id_;
}
inline void mds_Alive::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void mds_Alive::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void mds_Alive::set_id(const void* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* mds_Alive::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* mds_Alive::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void mds_Alive::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 channel_bitrate = 3;
inline bool mds_Alive::has_channel_bitrate() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void mds_Alive::set_has_channel_bitrate() {
  _has_bits_[0] |= 0x00000004u;
}
inline void mds_Alive::clear_has_channel_bitrate() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void mds_Alive::clear_channel_bitrate() {
  channel_bitrate_ = 0;
  clear_has_channel_bitrate();
}
inline ::google::protobuf::int32 mds_Alive::channel_bitrate() const {
  return channel_bitrate_;
}
inline void mds_Alive::set_channel_bitrate(::google::protobuf::int32 value) {
  set_has_channel_bitrate();
  channel_bitrate_ = value;
}

// required int32 out_kbps = 4;
inline bool mds_Alive::has_out_kbps() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void mds_Alive::set_has_out_kbps() {
  _has_bits_[0] |= 0x00000008u;
}
inline void mds_Alive::clear_has_out_kbps() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void mds_Alive::clear_out_kbps() {
  out_kbps_ = 0;
  clear_has_out_kbps();
}
inline ::google::protobuf::int32 mds_Alive::out_kbps() const {
  return out_kbps_;
}
inline void mds_Alive::set_out_kbps(::google::protobuf::int32 value) {
  set_has_out_kbps();
  out_kbps_ = value;
}

// required int32 client_count = 5;
inline bool mds_Alive::has_client_count() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void mds_Alive::set_has_client_count() {
  _has_bits_[0] |= 0x00000010u;
}
inline void mds_Alive::clear_has_client_count() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void mds_Alive::clear_client_count() {
  client_count_ = 0;
  clear_has_client_count();
}
inline ::google::protobuf::int32 mds_Alive::client_count() const {
  return client_count_;
}
inline void mds_Alive::set_client_count(::google::protobuf::int32 value) {
  set_has_client_count();
  client_count_ = value;
}

// required float p2p_efficient = 6;
inline bool mds_Alive::has_p2p_efficient() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void mds_Alive::set_has_p2p_efficient() {
  _has_bits_[0] |= 0x00000020u;
}
inline void mds_Alive::clear_has_p2p_efficient() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void mds_Alive::clear_p2p_efficient() {
  p2p_efficient_ = 0;
  clear_has_p2p_efficient();
}
inline float mds_Alive::p2p_efficient() const {
  return p2p_efficient_;
}
inline void mds_Alive::set_p2p_efficient(float value) {
  set_has_p2p_efficient();
  p2p_efficient_ = value;
}

// optional float playing_quality = 7;
inline bool mds_Alive::has_playing_quality() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void mds_Alive::set_has_playing_quality() {
  _has_bits_[0] |= 0x00000040u;
}
inline void mds_Alive::clear_has_playing_quality() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void mds_Alive::clear_playing_quality() {
  playing_quality_ = 0;
  clear_has_playing_quality();
}
inline float mds_Alive::playing_quality() const {
  return playing_quality_;
}
inline void mds_Alive::set_playing_quality(float value) {
  set_has_playing_quality();
  playing_quality_ = value;
}

// optional float global_remote_to_local_lost_rate = 8;
inline bool mds_Alive::has_global_remote_to_local_lost_rate() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void mds_Alive::set_has_global_remote_to_local_lost_rate() {
  _has_bits_[0] |= 0x00000080u;
}
inline void mds_Alive::clear_has_global_remote_to_local_lost_rate() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void mds_Alive::clear_global_remote_to_local_lost_rate() {
  global_remote_to_local_lost_rate_ = 0;
  clear_has_global_remote_to_local_lost_rate();
}
inline float mds_Alive::global_remote_to_local_lost_rate() const {
  return global_remote_to_local_lost_rate_;
}
inline void mds_Alive::set_global_remote_to_local_lost_rate(float value) {
  set_has_global_remote_to_local_lost_rate();
  global_remote_to_local_lost_rate_ = value;
}

// -------------------------------------------------------------------

// shunt_Alive

// required bytes id = 1;
inline bool shunt_Alive::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void shunt_Alive::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void shunt_Alive::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void shunt_Alive::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& shunt_Alive::id() const {
  return *id_;
}
inline void shunt_Alive::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void shunt_Alive::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void shunt_Alive::set_id(const void* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* shunt_Alive::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* shunt_Alive::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void shunt_Alive::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 kbps = 2;
inline bool shunt_Alive::has_kbps() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void shunt_Alive::set_has_kbps() {
  _has_bits_[0] |= 0x00000002u;
}
inline void shunt_Alive::clear_has_kbps() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void shunt_Alive::clear_kbps() {
  kbps_ = 0;
  clear_has_kbps();
}
inline ::google::protobuf::int32 shunt_Alive::kbps() const {
  return kbps_;
}
inline void shunt_Alive::set_kbps(::google::protobuf::int32 value) {
  set_has_kbps();
  kbps_ = value;
}

// required bool is_connected = 3;
inline bool shunt_Alive::has_is_connected() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void shunt_Alive::set_has_is_connected() {
  _has_bits_[0] |= 0x00000004u;
}
inline void shunt_Alive::clear_has_is_connected() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void shunt_Alive::clear_is_connected() {
  is_connected_ = false;
  clear_has_is_connected();
}
inline bool shunt_Alive::is_connected() const {
  return is_connected_;
}
inline void shunt_Alive::set_is_connected(bool value) {
  set_has_is_connected();
  is_connected_ = value;
}

// optional int32 pid = 4;
inline bool shunt_Alive::has_pid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void shunt_Alive::set_has_pid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void shunt_Alive::clear_has_pid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void shunt_Alive::clear_pid() {
  pid_ = 0;
  clear_has_pid();
}
inline ::google::protobuf::int32 shunt_Alive::pid() const {
  return pid_;
}
inline void shunt_Alive::set_pid(::google::protobuf::int32 value) {
  set_has_pid();
  pid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace alive

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mds_2eproto__INCLUDED
