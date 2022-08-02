// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_API_SPLAYAPI_H_
#define FLATBUFFERS_GENERATED_API_SPLAYAPI_H_

#include "flatbuffers/flatbuffers.h"

#include "Command_generated.h"
#include "Common_generated.h"
#include "Control_generated.h"
#include "Cue_generated.h"
#include "Playlist_generated.h"

namespace SplayApi {

struct StatusRes;
struct StatusResBuilder;

struct Header;
struct HeaderBuilder;

struct Message;
struct MessageBuilder;

enum Body {
  Body_NONE = 0,
  Body_StatusRes = 1,
  Body_PlayPlaylistReq = 2,
  Body_PausePlaylistReq = 3,
  Body_StopPlaylistReq = 4,
  Body_GetPlaylistReq = 5,
  Body_GetPlaylistRes = 6,
  Body_GetAllPlaylistsReq = 7,
  Body_GetAllPlaylistsRes = 8,
  Body_GetCueReq = 9,
  Body_GetCueRes = 10,
  Body_GetAllCuesReq = 11,
  Body_GetAllCuesRes = 12,
  Body_GetFirmwareUpdateStatus = 13,
  Body_SystemInfo = 14,
  Body_RestorePackage = 15,
  Body_BackupInfo = 16,
  Body_DevicesInfo = 17,
  Body_MIN = Body_NONE,
  Body_MAX = Body_DevicesInfo
};

inline const Body (&EnumValuesBody())[18] {
  static const Body values[] = {
    Body_NONE,
    Body_StatusRes,
    Body_PlayPlaylistReq,
    Body_PausePlaylistReq,
    Body_StopPlaylistReq,
    Body_GetPlaylistReq,
    Body_GetPlaylistRes,
    Body_GetAllPlaylistsReq,
    Body_GetAllPlaylistsRes,
    Body_GetCueReq,
    Body_GetCueRes,
    Body_GetAllCuesReq,
    Body_GetAllCuesRes,
    Body_GetFirmwareUpdateStatus,
    Body_SystemInfo,
    Body_RestorePackage,
    Body_BackupInfo,
    Body_DevicesInfo
  };
  return values;
}

inline const char * const *EnumNamesBody() {
  static const char * const names[19] = {
    "NONE",
    "StatusRes",
    "PlayPlaylistReq",
    "PausePlaylistReq",
    "StopPlaylistReq",
    "GetPlaylistReq",
    "GetPlaylistRes",
    "GetAllPlaylistsReq",
    "GetAllPlaylistsRes",
    "GetCueReq",
    "GetCueRes",
    "GetAllCuesReq",
    "GetAllCuesRes",
    "GetFirmwareUpdateStatus",
    "SystemInfo",
    "RestorePackage",
    "BackupInfo",
    "DevicesInfo",
    nullptr
  };
  return names;
}

inline const char *EnumNameBody(Body e) {
  if (flatbuffers::IsOutRange(e, Body_NONE, Body_DevicesInfo)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesBody()[index];
}

template<typename T> struct BodyTraits {
  static const Body enum_value = Body_NONE;
};

template<> struct BodyTraits<SplayApi::StatusRes> {
  static const Body enum_value = Body_StatusRes;
};

template<> struct BodyTraits<SplayApi::PlayPlaylistReq> {
  static const Body enum_value = Body_PlayPlaylistReq;
};

template<> struct BodyTraits<SplayApi::PausePlaylistReq> {
  static const Body enum_value = Body_PausePlaylistReq;
};

template<> struct BodyTraits<SplayApi::StopPlaylistReq> {
  static const Body enum_value = Body_StopPlaylistReq;
};

template<> struct BodyTraits<SplayApi::GetPlaylistReq> {
  static const Body enum_value = Body_GetPlaylistReq;
};

template<> struct BodyTraits<SplayApi::GetPlaylistRes> {
  static const Body enum_value = Body_GetPlaylistRes;
};

template<> struct BodyTraits<SplayApi::GetAllPlaylistsReq> {
  static const Body enum_value = Body_GetAllPlaylistsReq;
};

template<> struct BodyTraits<SplayApi::GetAllPlaylistsRes> {
  static const Body enum_value = Body_GetAllPlaylistsRes;
};

template<> struct BodyTraits<SplayApi::GetCueReq> {
  static const Body enum_value = Body_GetCueReq;
};

template<> struct BodyTraits<SplayApi::GetCueRes> {
  static const Body enum_value = Body_GetCueRes;
};

template<> struct BodyTraits<SplayApi::GetAllCuesReq> {
  static const Body enum_value = Body_GetAllCuesReq;
};

template<> struct BodyTraits<SplayApi::GetAllCuesRes> {
  static const Body enum_value = Body_GetAllCuesRes;
};

template<> struct BodyTraits<SplayApi::GetFirmwareUpdateStatus> {
  static const Body enum_value = Body_GetFirmwareUpdateStatus;
};

template<> struct BodyTraits<SplayApi::SystemInfo> {
  static const Body enum_value = Body_SystemInfo;
};

template<> struct BodyTraits<SplayApi::RestorePackage> {
  static const Body enum_value = Body_RestorePackage;
};

template<> struct BodyTraits<SplayApi::BackupInfo> {
  static const Body enum_value = Body_BackupInfo;
};

template<> struct BodyTraits<SplayApi::DevicesInfo> {
  static const Body enum_value = Body_DevicesInfo;
};

bool VerifyBody(flatbuffers::Verifier &verifier, const void *obj, Body type);
bool VerifyBodyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct StatusRes FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef StatusResBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RESULT = 4,
    VT_ERROR = 6
  };
  bool result() const {
    return GetField<uint8_t>(VT_RESULT, 0) != 0;
  }
  const flatbuffers::String *error() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_RESULT) &&
           VerifyOffset(verifier, VT_ERROR) &&
           verifier.VerifyString(error()) &&
           verifier.EndTable();
  }
};

struct StatusResBuilder {
  typedef StatusRes Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_result(bool result) {
    fbb_.AddElement<uint8_t>(StatusRes::VT_RESULT, static_cast<uint8_t>(result), 0);
  }
  void add_error(flatbuffers::Offset<flatbuffers::String> error) {
    fbb_.AddOffset(StatusRes::VT_ERROR, error);
  }
  explicit StatusResBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StatusResBuilder &operator=(const StatusResBuilder &);
  flatbuffers::Offset<StatusRes> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<StatusRes>(end);
    return o;
  }
};

inline flatbuffers::Offset<StatusRes> CreateStatusRes(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool result = false,
    flatbuffers::Offset<flatbuffers::String> error = 0) {
  StatusResBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_result(result);
  return builder_.Finish();
}

inline flatbuffers::Offset<StatusRes> CreateStatusResDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool result = false,
    const char *error = nullptr) {
  auto error__ = error ? _fbb.CreateString(error) : 0;
  return SplayApi::CreateStatusRes(
      _fbb,
      result,
      error__);
}

struct Header FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef HeaderBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4
  };
  const flatbuffers::String *token() const {
    return GetPointer<const flatbuffers::String *>(VT_TOKEN);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TOKEN) &&
           verifier.VerifyString(token()) &&
           verifier.EndTable();
  }
};

struct HeaderBuilder {
  typedef Header Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(flatbuffers::Offset<flatbuffers::String> token) {
    fbb_.AddOffset(Header::VT_TOKEN, token);
  }
  explicit HeaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  HeaderBuilder &operator=(const HeaderBuilder &);
  flatbuffers::Offset<Header> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Header>(end);
    return o;
  }
};

inline flatbuffers::Offset<Header> CreateHeader(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> token = 0) {
  HeaderBuilder builder_(_fbb);
  builder_.add_token(token);
  return builder_.Finish();
}

inline flatbuffers::Offset<Header> CreateHeaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *token = nullptr) {
  auto token__ = token ? _fbb.CreateString(token) : 0;
  return SplayApi::CreateHeader(
      _fbb,
      token__);
}

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_HEADER = 4,
    VT_BODY_TYPE = 6,
    VT_BODY = 8
  };
  const SplayApi::Header *header() const {
    return GetPointer<const SplayApi::Header *>(VT_HEADER);
  }
  SplayApi::Body body_type() const {
    return static_cast<SplayApi::Body>(GetField<uint8_t>(VT_BODY_TYPE, 0));
  }
  const void *body() const {
    return GetPointer<const void *>(VT_BODY);
  }
  template<typename T> const T *body_as() const;
  const SplayApi::StatusRes *body_as_StatusRes() const {
    return body_type() == SplayApi::Body_StatusRes ? static_cast<const SplayApi::StatusRes *>(body()) : nullptr;
  }
  const SplayApi::PlayPlaylistReq *body_as_PlayPlaylistReq() const {
    return body_type() == SplayApi::Body_PlayPlaylistReq ? static_cast<const SplayApi::PlayPlaylistReq *>(body()) : nullptr;
  }
  const SplayApi::PausePlaylistReq *body_as_PausePlaylistReq() const {
    return body_type() == SplayApi::Body_PausePlaylistReq ? static_cast<const SplayApi::PausePlaylistReq *>(body()) : nullptr;
  }
  const SplayApi::StopPlaylistReq *body_as_StopPlaylistReq() const {
    return body_type() == SplayApi::Body_StopPlaylistReq ? static_cast<const SplayApi::StopPlaylistReq *>(body()) : nullptr;
  }
  const SplayApi::GetPlaylistReq *body_as_GetPlaylistReq() const {
    return body_type() == SplayApi::Body_GetPlaylistReq ? static_cast<const SplayApi::GetPlaylistReq *>(body()) : nullptr;
  }
  const SplayApi::GetPlaylistRes *body_as_GetPlaylistRes() const {
    return body_type() == SplayApi::Body_GetPlaylistRes ? static_cast<const SplayApi::GetPlaylistRes *>(body()) : nullptr;
  }
  const SplayApi::GetAllPlaylistsReq *body_as_GetAllPlaylistsReq() const {
    return body_type() == SplayApi::Body_GetAllPlaylistsReq ? static_cast<const SplayApi::GetAllPlaylistsReq *>(body()) : nullptr;
  }
  const SplayApi::GetAllPlaylistsRes *body_as_GetAllPlaylistsRes() const {
    return body_type() == SplayApi::Body_GetAllPlaylistsRes ? static_cast<const SplayApi::GetAllPlaylistsRes *>(body()) : nullptr;
  }
  const SplayApi::GetCueReq *body_as_GetCueReq() const {
    return body_type() == SplayApi::Body_GetCueReq ? static_cast<const SplayApi::GetCueReq *>(body()) : nullptr;
  }
  const SplayApi::GetCueRes *body_as_GetCueRes() const {
    return body_type() == SplayApi::Body_GetCueRes ? static_cast<const SplayApi::GetCueRes *>(body()) : nullptr;
  }
  const SplayApi::GetAllCuesReq *body_as_GetAllCuesReq() const {
    return body_type() == SplayApi::Body_GetAllCuesReq ? static_cast<const SplayApi::GetAllCuesReq *>(body()) : nullptr;
  }
  const SplayApi::GetAllCuesRes *body_as_GetAllCuesRes() const {
    return body_type() == SplayApi::Body_GetAllCuesRes ? static_cast<const SplayApi::GetAllCuesRes *>(body()) : nullptr;
  }
  const SplayApi::GetFirmwareUpdateStatus *body_as_GetFirmwareUpdateStatus() const {
    return body_type() == SplayApi::Body_GetFirmwareUpdateStatus ? static_cast<const SplayApi::GetFirmwareUpdateStatus *>(body()) : nullptr;
  }
  const SplayApi::SystemInfo *body_as_SystemInfo() const {
    return body_type() == SplayApi::Body_SystemInfo ? static_cast<const SplayApi::SystemInfo *>(body()) : nullptr;
  }
  const SplayApi::RestorePackage *body_as_RestorePackage() const {
    return body_type() == SplayApi::Body_RestorePackage ? static_cast<const SplayApi::RestorePackage *>(body()) : nullptr;
  }
  const SplayApi::BackupInfo *body_as_BackupInfo() const {
    return body_type() == SplayApi::Body_BackupInfo ? static_cast<const SplayApi::BackupInfo *>(body()) : nullptr;
  }
  const SplayApi::DevicesInfo *body_as_DevicesInfo() const {
    return body_type() == SplayApi::Body_DevicesInfo ? static_cast<const SplayApi::DevicesInfo *>(body()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<uint8_t>(verifier, VT_BODY_TYPE) &&
           VerifyOffset(verifier, VT_BODY) &&
           VerifyBody(verifier, body(), body_type()) &&
           verifier.EndTable();
  }
};

template<> inline const SplayApi::StatusRes *Message::body_as<SplayApi::StatusRes>() const {
  return body_as_StatusRes();
}

template<> inline const SplayApi::PlayPlaylistReq *Message::body_as<SplayApi::PlayPlaylistReq>() const {
  return body_as_PlayPlaylistReq();
}

template<> inline const SplayApi::PausePlaylistReq *Message::body_as<SplayApi::PausePlaylistReq>() const {
  return body_as_PausePlaylistReq();
}

template<> inline const SplayApi::StopPlaylistReq *Message::body_as<SplayApi::StopPlaylistReq>() const {
  return body_as_StopPlaylistReq();
}

template<> inline const SplayApi::GetPlaylistReq *Message::body_as<SplayApi::GetPlaylistReq>() const {
  return body_as_GetPlaylistReq();
}

template<> inline const SplayApi::GetPlaylistRes *Message::body_as<SplayApi::GetPlaylistRes>() const {
  return body_as_GetPlaylistRes();
}

template<> inline const SplayApi::GetAllPlaylistsReq *Message::body_as<SplayApi::GetAllPlaylistsReq>() const {
  return body_as_GetAllPlaylistsReq();
}

template<> inline const SplayApi::GetAllPlaylistsRes *Message::body_as<SplayApi::GetAllPlaylistsRes>() const {
  return body_as_GetAllPlaylistsRes();
}

template<> inline const SplayApi::GetCueReq *Message::body_as<SplayApi::GetCueReq>() const {
  return body_as_GetCueReq();
}

template<> inline const SplayApi::GetCueRes *Message::body_as<SplayApi::GetCueRes>() const {
  return body_as_GetCueRes();
}

template<> inline const SplayApi::GetAllCuesReq *Message::body_as<SplayApi::GetAllCuesReq>() const {
  return body_as_GetAllCuesReq();
}

template<> inline const SplayApi::GetAllCuesRes *Message::body_as<SplayApi::GetAllCuesRes>() const {
  return body_as_GetAllCuesRes();
}

template<> inline const SplayApi::GetFirmwareUpdateStatus *Message::body_as<SplayApi::GetFirmwareUpdateStatus>() const {
  return body_as_GetFirmwareUpdateStatus();
}

template<> inline const SplayApi::SystemInfo *Message::body_as<SplayApi::SystemInfo>() const {
  return body_as_SystemInfo();
}

template<> inline const SplayApi::RestorePackage *Message::body_as<SplayApi::RestorePackage>() const {
  return body_as_RestorePackage();
}

template<> inline const SplayApi::BackupInfo *Message::body_as<SplayApi::BackupInfo>() const {
  return body_as_BackupInfo();
}

template<> inline const SplayApi::DevicesInfo *Message::body_as<SplayApi::DevicesInfo>() const {
  return body_as_DevicesInfo();
}

struct MessageBuilder {
  typedef Message Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<SplayApi::Header> header) {
    fbb_.AddOffset(Message::VT_HEADER, header);
  }
  void add_body_type(SplayApi::Body body_type) {
    fbb_.AddElement<uint8_t>(Message::VT_BODY_TYPE, static_cast<uint8_t>(body_type), 0);
  }
  void add_body(flatbuffers::Offset<void> body) {
    fbb_.AddOffset(Message::VT_BODY, body);
  }
  explicit MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MessageBuilder &operator=(const MessageBuilder &);
  flatbuffers::Offset<Message> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Message>(end);
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<SplayApi::Header> header = 0,
    SplayApi::Body body_type = SplayApi::Body_NONE,
    flatbuffers::Offset<void> body = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_body(body);
  builder_.add_header(header);
  builder_.add_body_type(body_type);
  return builder_.Finish();
}

inline bool VerifyBody(flatbuffers::Verifier &verifier, const void *obj, Body type) {
  switch (type) {
    case Body_NONE: {
      return true;
    }
    case Body_StatusRes: {
      auto ptr = reinterpret_cast<const SplayApi::StatusRes *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_PlayPlaylistReq: {
      auto ptr = reinterpret_cast<const SplayApi::PlayPlaylistReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_PausePlaylistReq: {
      auto ptr = reinterpret_cast<const SplayApi::PausePlaylistReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_StopPlaylistReq: {
      auto ptr = reinterpret_cast<const SplayApi::StopPlaylistReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetPlaylistReq: {
      auto ptr = reinterpret_cast<const SplayApi::GetPlaylistReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetPlaylistRes: {
      auto ptr = reinterpret_cast<const SplayApi::GetPlaylistRes *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetAllPlaylistsReq: {
      auto ptr = reinterpret_cast<const SplayApi::GetAllPlaylistsReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetAllPlaylistsRes: {
      auto ptr = reinterpret_cast<const SplayApi::GetAllPlaylistsRes *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetCueReq: {
      auto ptr = reinterpret_cast<const SplayApi::GetCueReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetCueRes: {
      auto ptr = reinterpret_cast<const SplayApi::GetCueRes *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetAllCuesReq: {
      auto ptr = reinterpret_cast<const SplayApi::GetAllCuesReq *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetAllCuesRes: {
      auto ptr = reinterpret_cast<const SplayApi::GetAllCuesRes *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_GetFirmwareUpdateStatus: {
      auto ptr = reinterpret_cast<const SplayApi::GetFirmwareUpdateStatus *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_SystemInfo: {
      auto ptr = reinterpret_cast<const SplayApi::SystemInfo *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_RestorePackage: {
      auto ptr = reinterpret_cast<const SplayApi::RestorePackage *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_BackupInfo: {
      auto ptr = reinterpret_cast<const SplayApi::BackupInfo *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_DevicesInfo: {
      auto ptr = reinterpret_cast<const SplayApi::DevicesInfo *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyBodyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyBody(
        verifier,  values->Get(i), types->GetEnum<Body>(i))) {
      return false;
    }
  }
  return true;
}

inline const SplayApi::Message *GetMessage(const void *buf) {
  return flatbuffers::GetRoot<SplayApi::Message>(buf);
}

inline const SplayApi::Message *GetSizePrefixedMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<SplayApi::Message>(buf);
}

inline bool VerifyMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<SplayApi::Message>(nullptr);
}

inline bool VerifySizePrefixedMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<SplayApi::Message>(nullptr);
}

inline void FinishMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<SplayApi::Message> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<SplayApi::Message> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace SplayApi

#endif  // FLATBUFFERS_GENERATED_API_SPLAYAPI_H_
