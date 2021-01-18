// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @const
 * @namespace
 */
var SplayApi = SplayApi || {};

/**
 * @enum {number}
 */
SplayApi.COMMAND = {
  PLAY_COMMAND: 0,
  PAUSE_COMMAND: 1,
  STOP_COMMAND: 2,
  GET_PLAYLIST_COMMAND: 3,
  UPDATE_PLAYLISTS_ORDER_COMMAND: 4,
  PLAY_ALL_PLAYLISTS_COMMAND: 5,
  PAUSE_ALL_PLAYLISTS_COMMAND: 6,
  STOP_ALL_PLAYLISTS_COMMAND: 7,
  GET_ALL_PLAYLISTS_COMMAND: 8,
  SET_PLAYLIST_INTENSITY_COMMAND: 9,
  GET_PLAYLIST_INTENSITY_COMMAND: 10,
  SET_TRACK_INTENSITY_COMMAND: 11,
  GET_TRACK_INTENSITY_COMMAND: 12,
  CAPTURE_DMX_FRAME_COMMAND: 13,
  RECORD_DMX_FRAME_COMMAND: 14,
  STOP_RECORD_COMMAND: 15,
  PLAY_CUE_COMMAND: 16,
  STOP_CUE_COMMAND: 17,
  UPDATE_PLAYLIST_COMMAND: 18,
  DELETE_PLAYLIST_COMMAND: 19,
  UPDATE_SETTINGS_COMMAND: 20,
  OSC_MESSAGE: 21,
  SET_PLAYLIST_TIME_POSITION_COMMAND: 22,
  SET_WEBSOCKET_INPUT_COMMAND: 23,
  SET_MASTER_INTENSITY: 24,
  PLAY_CUE_COMMAND_FUTURE: 25,
  PAUSE_CUE_COMMAND: 26,
  STOP_CUE_COMMAND_FUTURE: 27,
  GET_CUE_COMMAND: 28,
  GET_ALL_CUES_COMMAND: 29,
  GET_SCHEDULES_COMMAND: 30,
  UPDATE_SCHEDULE_COMMAND: 31,
  DELETE_SCHEDULE_COMMAND: 32,
  ENABLE_SCHEDULE_COMMAND: 33,
  UPDATE_STORAGE_PATH: 34,
  GET_EVENT_COMMAND: 36,
  GET_ALL_EVENTS_COMMAND: 37,
  UPDATE_EVENT_COMMAND: 38,
  DELETE_EVENT_COMMAND: 39,
  GET_TRIGGER_COMMAND: 40,
  GET_ALL_TRIGGERS_COMMAND: 41,
  UPDATE_TRIGGER_COMMAND: 42,
  DELETE_TRIGGER_COMMAND: 43,
  SEND_EVENT_COMMAND: 44,
  WAIT_TRIGGER_COMMAND: 45,
  CHECK_TRIGGER_COMMAND: 46,
  NOT_SET_COMMAND: 255
};

/**
 * @enum {string}
 */
SplayApi.COMMANDName = {
  '0': 'PLAY_COMMAND',
  '1': 'PAUSE_COMMAND',
  '2': 'STOP_COMMAND',
  '3': 'GET_PLAYLIST_COMMAND',
  '4': 'UPDATE_PLAYLISTS_ORDER_COMMAND',
  '5': 'PLAY_ALL_PLAYLISTS_COMMAND',
  '6': 'PAUSE_ALL_PLAYLISTS_COMMAND',
  '7': 'STOP_ALL_PLAYLISTS_COMMAND',
  '8': 'GET_ALL_PLAYLISTS_COMMAND',
  '9': 'SET_PLAYLIST_INTENSITY_COMMAND',
  '10': 'GET_PLAYLIST_INTENSITY_COMMAND',
  '11': 'SET_TRACK_INTENSITY_COMMAND',
  '12': 'GET_TRACK_INTENSITY_COMMAND',
  '13': 'CAPTURE_DMX_FRAME_COMMAND',
  '14': 'RECORD_DMX_FRAME_COMMAND',
  '15': 'STOP_RECORD_COMMAND',
  '16': 'PLAY_CUE_COMMAND',
  '17': 'STOP_CUE_COMMAND',
  '18': 'UPDATE_PLAYLIST_COMMAND',
  '19': 'DELETE_PLAYLIST_COMMAND',
  '20': 'UPDATE_SETTINGS_COMMAND',
  '21': 'OSC_MESSAGE',
  '22': 'SET_PLAYLIST_TIME_POSITION_COMMAND',
  '23': 'SET_WEBSOCKET_INPUT_COMMAND',
  '24': 'SET_MASTER_INTENSITY',
  '25': 'PLAY_CUE_COMMAND_FUTURE',
  '26': 'PAUSE_CUE_COMMAND',
  '27': 'STOP_CUE_COMMAND_FUTURE',
  '28': 'GET_CUE_COMMAND',
  '29': 'GET_ALL_CUES_COMMAND',
  '30': 'GET_SCHEDULES_COMMAND',
  '31': 'UPDATE_SCHEDULE_COMMAND',
  '32': 'DELETE_SCHEDULE_COMMAND',
  '33': 'ENABLE_SCHEDULE_COMMAND',
  '34': 'UPDATE_STORAGE_PATH',
  '36': 'GET_EVENT_COMMAND',
  '37': 'GET_ALL_EVENTS_COMMAND',
  '38': 'UPDATE_EVENT_COMMAND',
  '39': 'DELETE_EVENT_COMMAND',
  '40': 'GET_TRIGGER_COMMAND',
  '41': 'GET_ALL_TRIGGERS_COMMAND',
  '42': 'UPDATE_TRIGGER_COMMAND',
  '43': 'DELETE_TRIGGER_COMMAND',
  '44': 'SEND_EVENT_COMMAND',
  '45': 'WAIT_TRIGGER_COMMAND',
  '46': 'CHECK_TRIGGER_COMMAND',
  '255': 'NOT_SET_COMMAND'
};

// Exports for Node.js and RequireJS
this.SplayApi = SplayApi;
