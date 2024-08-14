// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CONTROL_SPLAYAPI_H_
#define FLATBUFFERS_GENERATED_CONTROL_SPLAYAPI_H_

#include "flatbuffers/flatbuffers.h"

namespace SplayApi {

struct TriggerTable;
struct TriggerTableBuilder;

struct EventTable;
struct EventTableBuilder;

enum CONTROL_TYPE {
  CONTROL_TYPE_TRIGGER = 0,
  CONTROL_TYPE_EVENT = 1,
  CONTROL_TYPE_MIN = CONTROL_TYPE_TRIGGER,
  CONTROL_TYPE_MAX = CONTROL_TYPE_EVENT
};

inline const CONTROL_TYPE (&EnumValuesCONTROL_TYPE())[2] {
  static const CONTROL_TYPE values[] = {
    CONTROL_TYPE_TRIGGER,
    CONTROL_TYPE_EVENT
  };
  return values;
}

inline const char * const *EnumNamesCONTROL_TYPE() {
  static const char * const names[3] = {
    "TRIGGER",
    "EVENT",
    nullptr
  };
  return names;
}

inline const char *EnumNameCONTROL_TYPE(CONTROL_TYPE e) {
  if (flatbuffers::IsOutRange(e, CONTROL_TYPE_TRIGGER, CONTROL_TYPE_EVENT)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesCONTROL_TYPE()[index];
}

enum TRIGGER_TYPE {
  TRIGGER_TYPE_NONE = 0,
  TRIGGER_TYPE_OSC = 1,
  TRIGGER_TYPE_RS232 = 2,
  TRIGGER_TYPE_IO = 3,
  TRIGGER_TYPE_ARTNET = 4,
  TRIGGER_TYPE_DMX = 5,
  TRIGGER_TYPE_SACN = 6,
  TRIGGER_TYPE_POWERUP = 7,
  TRIGGER_TYPE_UDP = 8,
  TRIGGER_TYPE_BUTTON = 9,
  TRIGGER_TYPE_IOE = 10,
  TRIGGER_TYPE_MIN = TRIGGER_TYPE_NONE,
  TRIGGER_TYPE_MAX = TRIGGER_TYPE_IOE
};

inline const TRIGGER_TYPE (&EnumValuesTRIGGER_TYPE())[11] {
  static const TRIGGER_TYPE values[] = {
    TRIGGER_TYPE_NONE,
    TRIGGER_TYPE_OSC,
    TRIGGER_TYPE_RS232,
    TRIGGER_TYPE_IO,
    TRIGGER_TYPE_ARTNET,
    TRIGGER_TYPE_DMX,
    TRIGGER_TYPE_SACN,
    TRIGGER_TYPE_POWERUP,
    TRIGGER_TYPE_UDP,
    TRIGGER_TYPE_BUTTON,
    TRIGGER_TYPE_IOE
  };
  return values;
}

inline const char * const *EnumNamesTRIGGER_TYPE() {
  static const char * const names[12] = {
    "NONE",
    "OSC",
    "RS232",
    "IO",
    "ARTNET",
    "DMX",
    "SACN",
    "POWERUP",
    "UDP",
    "BUTTON",
    "IOE",
    nullptr
  };
  return names;
}

inline const char *EnumNameTRIGGER_TYPE(TRIGGER_TYPE e) {
  if (flatbuffers::IsOutRange(e, TRIGGER_TYPE_NONE, TRIGGER_TYPE_IOE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTRIGGER_TYPE()[index];
}

enum EVENT_TYPE {
  EVENT_TYPE_NONE = 0,
  EVENT_TYPE_RS232 = 1,
  EVENT_TYPE_IO = 2,
  EVENT_TYPE_ARTNET = 3,
  EVENT_TYPE_DMX = 4,
  EVENT_TYPE_SACN = 5,
  EVENT_TYPE_OSC = 6,
  EVENT_TYPE_UDP = 7,
  EVENT_TYPE_IOE = 8,
  EVENT_TYPE_MIN = EVENT_TYPE_NONE,
  EVENT_TYPE_MAX = EVENT_TYPE_IOE,

};

inline const EVENT_TYPE (&EnumValuesEVENT_TYPE())[9] {
  static const EVENT_TYPE values[] = {
    EVENT_TYPE_NONE,
    EVENT_TYPE_RS232,
    EVENT_TYPE_IO,
    EVENT_TYPE_ARTNET,
    EVENT_TYPE_DMX,
    EVENT_TYPE_SACN,
    EVENT_TYPE_OSC,
    EVENT_TYPE_UDP,
    EVENT_TYPE_IOE
  };
  return values;
}

inline const char * const *EnumNamesEVENT_TYPE() {
  static const char * const names[10] = {
    "NONE",
    "RS232",
    "IO",
    "ARTNET",
    "DMX",
    "SACN",
    "OSC",
    "UDP",
    "IOE",
    nullptr
  };
  return names;
}

inline const char *EnumNameEVENT_TYPE(EVENT_TYPE e) {
  if (flatbuffers::IsOutRange(e, EVENT_TYPE_NONE, EVENT_TYPE_IOE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesEVENT_TYPE()[index];
}

struct TriggerTable FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TriggerTableBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_TYPE = 8,
    VT_ACTIVE = 10,
    VT_VALUE = 12,
    VT_START = 14
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  SplayApi::TRIGGER_TYPE type() const {
    return static_cast<SplayApi::TRIGGER_TYPE>(GetField<uint8_t>(VT_TYPE, 0));
  }
  bool active() const {
    return GetField<uint8_t>(VT_ACTIVE, 0) != 0;
  }
  const flatbuffers::String *value() const {
    return GetPointer<const flatbuffers::String *>(VT_VALUE);
  }
  uint32_t start() const {
    return GetField<uint32_t>(VT_START, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_ACTIVE) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyString(value()) &&
           VerifyField<uint32_t>(verifier, VT_START) &&
           verifier.EndTable();
  }
};

struct TriggerTableBuilder {
  typedef TriggerTable Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(TriggerTable::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(TriggerTable::VT_NAME, name);
  }
  void add_type(SplayApi::TRIGGER_TYPE type) {
    fbb_.AddElement<uint8_t>(TriggerTable::VT_TYPE, static_cast<uint8_t>(type), 0);
  }
  void add_active(bool active) {
    fbb_.AddElement<uint8_t>(TriggerTable::VT_ACTIVE, static_cast<uint8_t>(active), 0);
  }
  void add_value(flatbuffers::Offset<flatbuffers::String> value) {
    fbb_.AddOffset(TriggerTable::VT_VALUE, value);
  }
  void add_start(uint32_t start) {
    fbb_.AddElement<uint32_t>(TriggerTable::VT_START, start, 0);
  }
  explicit TriggerTableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TriggerTableBuilder &operator=(const TriggerTableBuilder &);
  flatbuffers::Offset<TriggerTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TriggerTable>(end);
    return o;
  }
};

inline flatbuffers::Offset<TriggerTable> CreateTriggerTable(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    SplayApi::TRIGGER_TYPE type = SplayApi::TRIGGER_TYPE_NONE,
    bool active = false,
    flatbuffers::Offset<flatbuffers::String> value = 0,
    uint32_t start = 0) {
  TriggerTableBuilder builder_(_fbb);
  builder_.add_start(start);
  builder_.add_value(value);
  builder_.add_name(name);
  builder_.add_id(id);
  builder_.add_active(active);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<TriggerTable> CreateTriggerTableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    SplayApi::TRIGGER_TYPE type = SplayApi::TRIGGER_TYPE_NONE,
    bool active = false,
    const char *value = nullptr,
    uint32_t start = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateString(value) : 0;
  return SplayApi::CreateTriggerTable(
      _fbb,
      id,
      name__,
      type,
      active,
      value__,
      start);
}

struct EventTable FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef EventTableBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_TYPE = 8,
    VT_ACTIVE = 10,
    VT_VALUE = 12,
    VT_START = 14
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  SplayApi::EVENT_TYPE type() const {
    return static_cast<SplayApi::EVENT_TYPE>(GetField<uint8_t>(VT_TYPE, 0));
  }
  bool active() const {
    return GetField<uint8_t>(VT_ACTIVE, 0) != 0;
  }
  const flatbuffers::String *value() const {
    return GetPointer<const flatbuffers::String *>(VT_VALUE);
  }
  uint32_t start() const {
    return GetField<uint32_t>(VT_START, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_ACTIVE) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyString(value()) &&
           VerifyField<uint32_t>(verifier, VT_START) &&
           verifier.EndTable();
  }
};

struct EventTableBuilder {
  typedef EventTable Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(EventTable::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(EventTable::VT_NAME, name);
  }
  void add_type(SplayApi::EVENT_TYPE type) {
    fbb_.AddElement<uint8_t>(EventTable::VT_TYPE, static_cast<uint8_t>(type), 0);
  }
  void add_active(bool active) {
    fbb_.AddElement<uint8_t>(EventTable::VT_ACTIVE, static_cast<uint8_t>(active), 0);
  }
  void add_value(flatbuffers::Offset<flatbuffers::String> value) {
    fbb_.AddOffset(EventTable::VT_VALUE, value);
  }
  void add_start(uint32_t start) {
    fbb_.AddElement<uint32_t>(EventTable::VT_START, start, 0);
  }
  explicit EventTableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EventTableBuilder &operator=(const EventTableBuilder &);
  flatbuffers::Offset<EventTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<EventTable>(end);
    return o;
  }
};

inline flatbuffers::Offset<EventTable> CreateEventTable(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    SplayApi::EVENT_TYPE type = SplayApi::EVENT_TYPE_NONE,
    bool active = false,
    flatbuffers::Offset<flatbuffers::String> value = 0,
    uint32_t start = 0) {
  EventTableBuilder builder_(_fbb);
  builder_.add_start(start);
  builder_.add_value(value);
  builder_.add_name(name);
  builder_.add_id(id);
  builder_.add_active(active);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<EventTable> CreateEventTableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    SplayApi::EVENT_TYPE type = SplayApi::EVENT_TYPE_NONE,
    bool active = false,
    const char *value = nullptr,
    uint32_t start = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateString(value) : 0;
  return SplayApi::CreateEventTable(
      _fbb,
      id,
      name__,
      type,
      active,
      value__,
      start);
}

}  // namespace SplayApi

#endif  // FLATBUFFERS_GENERATED_CONTROL_SPLAYAPI_H_
