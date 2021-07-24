// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COMMON_SPLAYAPI_H_
#define FLATBUFFERS_GENERATED_COMMON_SPLAYAPI_H_

#include "flatbuffers/flatbuffers.h"

namespace SplayApi {

enum UNIVERSE_TYPE {
  UNIVERSE_TYPE_DMX = 0,
  UNIVERSE_TYPE_ARTNET = 1,
  UNIVERSE_TYPE_SACN = 2,
  UNIVERSE_TYPE_NONE = 3,
  UNIVERSE_TYPE_MIN = UNIVERSE_TYPE_DMX,
  UNIVERSE_TYPE_MAX = UNIVERSE_TYPE_NONE
};

inline const UNIVERSE_TYPE (&EnumValuesUNIVERSE_TYPE())[4] {
  static const UNIVERSE_TYPE values[] = {
    UNIVERSE_TYPE_DMX,
    UNIVERSE_TYPE_ARTNET,
    UNIVERSE_TYPE_SACN,
    UNIVERSE_TYPE_NONE
  };
  return values;
}

inline const char * const *EnumNamesUNIVERSE_TYPE() {
  static const char * const names[5] = {
    "DMX",
    "ARTNET",
    "SACN",
    "NONE",
    nullptr
  };
  return names;
}

inline const char *EnumNameUNIVERSE_TYPE(UNIVERSE_TYPE e) {
  if (flatbuffers::IsOutRange(e, UNIVERSE_TYPE_DMX, UNIVERSE_TYPE_NONE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesUNIVERSE_TYPE()[index];
}

/// Don't change order
enum PIXEL_ORDER {
  PIXEL_ORDER_RGB = 0,
  PIXEL_ORDER_RBG = 1,
  PIXEL_ORDER_GRB = 2,
  PIXEL_ORDER_GBR = 3,
  PIXEL_ORDER_BRG = 4,
  PIXEL_ORDER_BGR = 5,
  PIXEL_ORDER_RGBW = 6,
  PIXEL_ORDER_RBGW = 7,
  PIXEL_ORDER_GRBW = 8,
  PIXEL_ORDER_GBRW = 9,
  PIXEL_ORDER_BRGW = 10,
  PIXEL_ORDER_BGRW = 11,
  PIXEL_ORDER_WRGB = 12,
  PIXEL_ORDER_WRBG = 13,
  PIXEL_ORDER_WGRB = 14,
  PIXEL_ORDER_WGBR = 15,
  PIXEL_ORDER_WBRG = 16,
  PIXEL_ORDER_WBGR = 17,
  PIXEL_ORDER_RWGB = 18,
  PIXEL_ORDER_RWBG = 19,
  PIXEL_ORDER_GWRB = 20,
  PIXEL_ORDER_GWBR = 21,
  PIXEL_ORDER_BWRG = 22,
  PIXEL_ORDER_BWGR = 23,
  PIXEL_ORDER_RGWB = 24,
  PIXEL_ORDER_RBWG = 25,
  PIXEL_ORDER_GRWB = 26,
  PIXEL_ORDER_GBWR = 27,
  PIXEL_ORDER_BRWG = 28,
  PIXEL_ORDER_BGWR = 29,
  PIXEL_ORDER_W = 30,
  PIXEL_ORDER_MIN = PIXEL_ORDER_RGB,
  PIXEL_ORDER_MAX = PIXEL_ORDER_W
};

inline const PIXEL_ORDER (&EnumValuesPIXEL_ORDER())[31] {
  static const PIXEL_ORDER values[] = {
    PIXEL_ORDER_RGB,
    PIXEL_ORDER_RBG,
    PIXEL_ORDER_GRB,
    PIXEL_ORDER_GBR,
    PIXEL_ORDER_BRG,
    PIXEL_ORDER_BGR,
    PIXEL_ORDER_RGBW,
    PIXEL_ORDER_RBGW,
    PIXEL_ORDER_GRBW,
    PIXEL_ORDER_GBRW,
    PIXEL_ORDER_BRGW,
    PIXEL_ORDER_BGRW,
    PIXEL_ORDER_WRGB,
    PIXEL_ORDER_WRBG,
    PIXEL_ORDER_WGRB,
    PIXEL_ORDER_WGBR,
    PIXEL_ORDER_WBRG,
    PIXEL_ORDER_WBGR,
    PIXEL_ORDER_RWGB,
    PIXEL_ORDER_RWBG,
    PIXEL_ORDER_GWRB,
    PIXEL_ORDER_GWBR,
    PIXEL_ORDER_BWRG,
    PIXEL_ORDER_BWGR,
    PIXEL_ORDER_RGWB,
    PIXEL_ORDER_RBWG,
    PIXEL_ORDER_GRWB,
    PIXEL_ORDER_GBWR,
    PIXEL_ORDER_BRWG,
    PIXEL_ORDER_BGWR,
    PIXEL_ORDER_W
  };
  return values;
}

inline const char * const *EnumNamesPIXEL_ORDER() {
  static const char * const names[32] = {
    "RGB",
    "RBG",
    "GRB",
    "GBR",
    "BRG",
    "BGR",
    "RGBW",
    "RBGW",
    "GRBW",
    "GBRW",
    "BRGW",
    "BGRW",
    "WRGB",
    "WRBG",
    "WGRB",
    "WGBR",
    "WBRG",
    "WBGR",
    "RWGB",
    "RWBG",
    "GWRB",
    "GWBR",
    "BWRG",
    "BWGR",
    "RGWB",
    "RBWG",
    "GRWB",
    "GBWR",
    "BRWG",
    "BGWR",
    "W",
    nullptr
  };
  return names;
}

inline const char *EnumNamePIXEL_ORDER(PIXEL_ORDER e) {
  if (flatbuffers::IsOutRange(e, PIXEL_ORDER_RGB, PIXEL_ORDER_W)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesPIXEL_ORDER()[index];
}

enum SETTING {
  SETTING_IS_SPARE = 0,
  SETTING_SYSTEM_NAME = 1,
  SETTING_PLAYBACK_CONFIG = 2,
  SETTING_PASSWORD = 3,
  SETTING_HELP_HINTS = 4,
  SETTING_SERIALNO = 5,
  SETTING_ENABLE_PASSWORD = 6,
  SETTING_SMTP = 7,
  SETTING_EMAIL = 8,
  SETTING_INPUT = 9,
  SETTING_OUTPUT = 10,
  SETTING_DMX = 11,
  SETTING_ARTNET = 12,
  SETTING_SACN = 13,
  SETTING_LOCATION = 14,
  SETTING_NTP = 15,
  SETTING_BASE_PATH = 16,
  SETTING_CUE_PATH = 17,
  SETTING_HOME_INTERFACE = 18,
  SETTING_UDP = 19,
  SETTING_TCP = 20,
  SETTING_RS232C = 21,
  SETTING_OSC = 22,
  SETTING_IEEE1588_CONFIG = 23,
  SETTING_IEEE1588_ACTIVE = 24,
  SETTING_LOCK_STATUS = 25,
  SETTING_DB_VERSION = 26,
  SETTING_MIN = SETTING_IS_SPARE,
  SETTING_MAX = SETTING_DB_VERSION
};

inline const SETTING (&EnumValuesSETTING())[27] {
  static const SETTING values[] = {
    SETTING_IS_SPARE,
    SETTING_SYSTEM_NAME,
    SETTING_PLAYBACK_CONFIG,
    SETTING_PASSWORD,
    SETTING_HELP_HINTS,
    SETTING_SERIALNO,
    SETTING_ENABLE_PASSWORD,
    SETTING_SMTP,
    SETTING_EMAIL,
    SETTING_INPUT,
    SETTING_OUTPUT,
    SETTING_DMX,
    SETTING_ARTNET,
    SETTING_SACN,
    SETTING_LOCATION,
    SETTING_NTP,
    SETTING_BASE_PATH,
    SETTING_CUE_PATH,
    SETTING_HOME_INTERFACE,
    SETTING_UDP,
    SETTING_TCP,
    SETTING_RS232C,
    SETTING_OSC,
    SETTING_IEEE1588_CONFIG,
    SETTING_IEEE1588_ACTIVE,
    SETTING_LOCK_STATUS,
    SETTING_DB_VERSION
  };
  return values;
}

inline const char * const *EnumNamesSETTING() {
  static const char * const names[28] = {
    "IS_SPARE",
    "SYSTEM_NAME",
    "PLAYBACK_CONFIG",
    "PASSWORD",
    "HELP_HINTS",
    "SERIALNO",
    "ENABLE_PASSWORD",
    "SMTP",
    "EMAIL",
    "INPUT",
    "OUTPUT",
    "DMX",
    "ARTNET",
    "SACN",
    "LOCATION",
    "NTP",
    "BASE_PATH",
    "CUE_PATH",
    "HOME_INTERFACE",
    "UDP",
    "TCP",
    "RS232C",
    "OSC",
    "IEEE1588_CONFIG",
    "IEEE1588_ACTIVE",
    "LOCK_STATUS",
    "DB_VERSION",
    nullptr
  };
  return names;
}

inline const char *EnumNameSETTING(SETTING e) {
  if (flatbuffers::IsOutRange(e, SETTING_IS_SPARE, SETTING_DB_VERSION)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSETTING()[index];
}

}  // namespace SplayApi

#endif  // FLATBUFFERS_GENERATED_COMMON_SPLAYAPI_H_
