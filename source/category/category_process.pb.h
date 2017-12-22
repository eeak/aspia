// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_process.proto

#ifndef PROTOBUF_category_5fprocess_2eproto__INCLUDED
#define PROTOBUF_category_5fprocess_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_category_5fprocess_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsProcesses_ItemImpl();
void InitDefaultsProcesses_Item();
void InitDefaultsProcessesImpl();
void InitDefaultsProcesses();
inline void InitDefaults() {
  InitDefaultsProcesses_Item();
  InitDefaultsProcesses();
}
}  // namespace protobuf_category_5fprocess_2eproto
namespace aspia {
namespace proto {
class Processes;
class ProcessesDefaultTypeInternal;
extern ProcessesDefaultTypeInternal _Processes_default_instance_;
class Processes_Item;
class Processes_ItemDefaultTypeInternal;
extern Processes_ItemDefaultTypeInternal _Processes_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

// ===================================================================

class Processes_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Processes.Item) */ {
 public:
  Processes_Item();
  virtual ~Processes_Item();

  Processes_Item(const Processes_Item& from);

  inline Processes_Item& operator=(const Processes_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Processes_Item(Processes_Item&& from) noexcept
    : Processes_Item() {
    *this = ::std::move(from);
  }

  inline Processes_Item& operator=(Processes_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Processes_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Processes_Item* internal_default_instance() {
    return reinterpret_cast<const Processes_Item*>(
               &_Processes_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Processes_Item* other);
  friend void swap(Processes_Item& a, Processes_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Processes_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  Processes_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Processes_Item& from);
  void MergeFrom(const Processes_Item& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Processes_Item* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string process_name = 1;
  void clear_process_name();
  static const int kProcessNameFieldNumber = 1;
  const ::std::string& process_name() const;
  void set_process_name(const ::std::string& value);
  #if LANG_CXX11
  void set_process_name(::std::string&& value);
  #endif
  void set_process_name(const char* value);
  void set_process_name(const char* value, size_t size);
  ::std::string* mutable_process_name();
  ::std::string* release_process_name();
  void set_allocated_process_name(::std::string* process_name);

  // string file_path = 2;
  void clear_file_path();
  static const int kFilePathFieldNumber = 2;
  const ::std::string& file_path() const;
  void set_file_path(const ::std::string& value);
  #if LANG_CXX11
  void set_file_path(::std::string&& value);
  #endif
  void set_file_path(const char* value);
  void set_file_path(const char* value, size_t size);
  ::std::string* mutable_file_path();
  ::std::string* release_file_path();
  void set_allocated_file_path(::std::string* file_path);

  // string description = 5;
  void clear_description();
  static const int kDescriptionFieldNumber = 5;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // uint64 used_memory = 3;
  void clear_used_memory();
  static const int kUsedMemoryFieldNumber = 3;
  ::google::protobuf::uint64 used_memory() const;
  void set_used_memory(::google::protobuf::uint64 value);

  // uint64 used_swap = 4;
  void clear_used_swap();
  static const int kUsedSwapFieldNumber = 4;
  ::google::protobuf::uint64 used_swap() const;
  void set_used_swap(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.Processes.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr process_name_;
  ::google::protobuf::internal::ArenaStringPtr file_path_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::uint64 used_memory_;
  ::google::protobuf::uint64 used_swap_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fprocess_2eproto::TableStruct;
  friend void ::protobuf_category_5fprocess_2eproto::InitDefaultsProcesses_ItemImpl();
};
// -------------------------------------------------------------------

class Processes : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Processes) */ {
 public:
  Processes();
  virtual ~Processes();

  Processes(const Processes& from);

  inline Processes& operator=(const Processes& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Processes(Processes&& from) noexcept
    : Processes() {
    *this = ::std::move(from);
  }

  inline Processes& operator=(Processes&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Processes& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Processes* internal_default_instance() {
    return reinterpret_cast<const Processes*>(
               &_Processes_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Processes* other);
  friend void swap(Processes& a, Processes& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Processes* New() const PROTOBUF_FINAL { return New(NULL); }

  Processes* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Processes& from);
  void MergeFrom(const Processes& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Processes* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Processes_Item Item;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.Processes.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::Processes_Item& item(int index) const;
  ::aspia::proto::Processes_Item* mutable_item(int index);
  ::aspia::proto::Processes_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::Processes_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::Processes_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.Processes)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::Processes_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fprocess_2eproto::TableStruct;
  friend void ::protobuf_category_5fprocess_2eproto::InitDefaultsProcessesImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Processes_Item

// string process_name = 1;
inline void Processes_Item::clear_process_name() {
  process_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Processes_Item::process_name() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.Item.process_name)
  return process_name_.GetNoArena();
}
inline void Processes_Item::set_process_name(const ::std::string& value) {
  
  process_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Processes.Item.process_name)
}
#if LANG_CXX11
inline void Processes_Item::set_process_name(::std::string&& value) {
  
  process_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Processes.Item.process_name)
}
#endif
inline void Processes_Item::set_process_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  process_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Processes.Item.process_name)
}
inline void Processes_Item::set_process_name(const char* value, size_t size) {
  
  process_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Processes.Item.process_name)
}
inline ::std::string* Processes_Item::mutable_process_name() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Processes.Item.process_name)
  return process_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Processes_Item::release_process_name() {
  // @@protoc_insertion_point(field_release:aspia.proto.Processes.Item.process_name)
  
  return process_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Processes_Item::set_allocated_process_name(::std::string* process_name) {
  if (process_name != NULL) {
    
  } else {
    
  }
  process_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), process_name);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Processes.Item.process_name)
}

// string file_path = 2;
inline void Processes_Item::clear_file_path() {
  file_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Processes_Item::file_path() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.Item.file_path)
  return file_path_.GetNoArena();
}
inline void Processes_Item::set_file_path(const ::std::string& value) {
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Processes.Item.file_path)
}
#if LANG_CXX11
inline void Processes_Item::set_file_path(::std::string&& value) {
  
  file_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Processes.Item.file_path)
}
#endif
inline void Processes_Item::set_file_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Processes.Item.file_path)
}
inline void Processes_Item::set_file_path(const char* value, size_t size) {
  
  file_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Processes.Item.file_path)
}
inline ::std::string* Processes_Item::mutable_file_path() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Processes.Item.file_path)
  return file_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Processes_Item::release_file_path() {
  // @@protoc_insertion_point(field_release:aspia.proto.Processes.Item.file_path)
  
  return file_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Processes_Item::set_allocated_file_path(::std::string* file_path) {
  if (file_path != NULL) {
    
  } else {
    
  }
  file_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_path);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Processes.Item.file_path)
}

// uint64 used_memory = 3;
inline void Processes_Item::clear_used_memory() {
  used_memory_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Processes_Item::used_memory() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.Item.used_memory)
  return used_memory_;
}
inline void Processes_Item::set_used_memory(::google::protobuf::uint64 value) {
  
  used_memory_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Processes.Item.used_memory)
}

// uint64 used_swap = 4;
inline void Processes_Item::clear_used_swap() {
  used_swap_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Processes_Item::used_swap() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.Item.used_swap)
  return used_swap_;
}
inline void Processes_Item::set_used_swap(::google::protobuf::uint64 value) {
  
  used_swap_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Processes.Item.used_swap)
}

// string description = 5;
inline void Processes_Item::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Processes_Item::description() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.Item.description)
  return description_.GetNoArena();
}
inline void Processes_Item::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Processes.Item.description)
}
#if LANG_CXX11
inline void Processes_Item::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Processes.Item.description)
}
#endif
inline void Processes_Item::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Processes.Item.description)
}
inline void Processes_Item::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Processes.Item.description)
}
inline ::std::string* Processes_Item::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Processes.Item.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Processes_Item::release_description() {
  // @@protoc_insertion_point(field_release:aspia.proto.Processes.Item.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Processes_Item::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Processes.Item.description)
}

// -------------------------------------------------------------------

// Processes

// repeated .aspia.proto.Processes.Item item = 1;
inline int Processes::item_size() const {
  return item_.size();
}
inline void Processes::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::Processes_Item& Processes::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.Processes.item)
  return item_.Get(index);
}
inline ::aspia::proto::Processes_Item* Processes::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.Processes.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::Processes_Item* Processes::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.Processes.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::Processes_Item >*
Processes::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.Processes.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::Processes_Item >&
Processes::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.Processes.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fprocess_2eproto__INCLUDED