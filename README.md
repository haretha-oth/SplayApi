# SplayApi
## S-Play HTTP API description
**S-Play firmware version 1.2.5**

### HTTP POST Commands for S-Play's playback.
Enum CONTROL_COMMANDS below presents the list of available playback commands.
They can be sent using HTTP POST requests to the device IP on the`55555` port and path`/api/`.

e.g. URL: ` http://192.168.1.13:55555/api`

Request can be tested using **curl**:

``
curl --header "Content-Type: application/json" -d "{\"command\":8}" http://localhost:55555/api --output -
``
> `Good to know`: RECORD only works on Dynamic Cues.

### Definitions

#### SplayEngine Commands
All playback control commands supported by the device
```c++
enum CONTROL_COMMANDS {
    PLAY_COMMAND = 0, // Play playlist already made by user
    PAUSE_COMMAND = 1, // Pause the playing playlist
    STOP_COMMAND = 2, // Stop the playlist is in PAUSE or PLAY status.
    STATUS_COMMAND = 3, // Get the status of playlist or cue in playlist
    CHECK_FILE_COMMAND = 4, // Check the recording exists, or data is not empty
    PLAY_ALL_PLAYLISTS_COMMAND = 5, // Play all playlist already made by user
    PAUSE_ALL_PLAYLISTS_COMMAND = 6, // Pause all playing playlists
    STOP_ALL_PLAYLISTS_COMMAND = 7, // Stop all playlists is in PAUSE or PLAY status.
    GET_RUNNING_PLAYLIST_COMMAND = 8, // Get status of all currently playing playlists
    SET_PLAYLIST_INTENSITY_COMMAND = 9, // Output intensity (Master Fader) of the given playlist, doesn't persist after stop
    GET_PLAYLIST_INTENSITY_COMMAND = 10, // Return the intensity of given playlist (not implemented)
    SET_TRACK_INTENSITY_COMMAND = 11, // Master Fader is the Output Intensity (not implemented)
    GET_TRACK_INTENSITY_COMMAND = 12, // Return the current Intensity (not implemented)
    CAPTURE_DMX_FRAME_COMMAND = 13, // Static frame recording (not implemented)
    RECORD_DMX_FRAME_COMMAND = 14, // Dynamic frame recording (not implemented)
    STOP_RECORD_COMMAND = 15, // Stop current recording
    PLAY_CUE_COMMAND = 16, // Play given cue (not implemented)
    STOP_CUE_COMMAND = 17, // Stop given cue (not implemented)
    UPDATE_PLAYLIST_COMMAND = 18,
    DELETE_PLAYLIST_COMMAND = 19,
    UPDATE_SETTINGS_COMMAND = 20,

    SET_PLAYLIST_TIME_POSITION_COMMAND = 22,

    SET_MASTER_INTENSITY = 24, // Set overall S-Play output intensity (Master Fader), doesn't persist after power cycle
    OSC_MESSAGE = 25, // Send OSC message to Playback to trigger existing OSC triggers
}
```
#### GetStatus Command Sub-Commands
Here are definition of Sub-Commands that used by STATUS_COMMAND, CAPTURE_DMX_FRAME_COMMAND and RECORD_DMX_FRAME_COMMAND comm}and.
```c++
enum COMMAND_TYPES {
    PLAYLIST_COMMAND                       = 0,     // Target is playlist.
    CUE_COMMAND                            = 1,     // Target is cue.
    ARTNET_COMMAND                         = 2,     // Capture or record from ArtNet device.
    SACN_COMMAND                           = 3,     // Capture or record from sACN device.
    DMX_COMMAND                            = 4      // Capture or record from DMX device.
};
```

#### Playlist Status
```c++
enum PLAYLIST_STATUS_TYPES {
    PLAYLIST_STATUS_IDLE                   = 0,     // Idle Status, No Action.
    PLAYLIST_STATUS_PLAYING                = 1,     // The playlist in Playing.
    PLAYLIST_STATUS_PAUSED                 = 2,     // The playlist in Paused.
    PLAYLIST_STATUS_STOPPED                = 3,     // The playlist in Stopped.
    PLAYLIST_STATUS_RECORD                 = 4,     // Futhure
    PLAYLIST_STATUS_ERROR                  = 5      // Error in playlist's last action.
};
```

#### Setting Command Sub-Command
Indicate what configuration is changed.
```c++
enum UPDATE_SETTINGS_TYPES {
    UPDATE_SETTINGS_NTP                    = 0,     // Ntp configuration is changed
    UPDATE_SETTINGS_ARTNET_DEVICE          = 1,     // ArtNet device configuration is changed
    UPDATE_SETTINGS_SACN_DEVICE            = 2,     // sACN device configuration is changed
    UPDATE_SETTINGS_DMX_DEVICE             = 3,     // DMX device configuration is changed
    UPDATE_SETTINGS_OUTPUT                 = 4,     // Output configuration is changed
    UPDATE_SETTINGS_SERIAL_DEVICE          = 5,     // Serial device configuration is changed
    UPDATE_SETTINGS_OSC_DEVICE             = 6      // OSC configuration is changed
};
```

#### Trigger Kind Names
Indicate what device do you wait to trigger from.
```c++
#define TRIGGER_TYPENAME_OSC               "osc"    // value: "string command"
#define TRIGGER_TYPENAME_RS232             "rs232"  // value: "string command"
#define TRIGGER_TYPENAME_DMX               "dmx"    // value: { "channel_number": 0~511, "threshold": 0~255 }
```

#### Event Kind Names
Indicate event target device to implement event action
```c++
#define EVENT_TYPE_RELAY                   "relay"  // value: { "relay_number": 0~.., "value": 0~1 }
#define EVENT_TYPE_RS232                   "rs232"  // value: "string"
```

#### Trigger Kinds
Indicate what device do you wait to trigger from.
```c++
enum TRIGGER_TYPE {
    TRIGGER_TYPE_NONE = 0,
    TRIGGER_TYPE_OSC,
    TRIGGER_TYPE_RS232,
    TRIGGER_TYPE_IO,
    TRIGGER_TYPE_ARTNET,
    TRIGGER_TYPE_DMX,
    TRIGGER_TYPE_SACN,
    TRIGGER_TYPE_POWERUP
};
```

### JSON Requests and Responses Examples

> `Good to know`: Be careful with JSON values' types, some fields support only integers or floats.

#### ET Status of All Playlists
This will return all the playlist IDs and its status and playing time.
If playlist is waiting any trigger, it has trigger information.
#### Request
```json
    {
        "command": GET_RUNNING_PLAYLIST_COMMAND
    }
```
#### Response
The playlist 6 is stopped and playlist 4 is playing. We use the response object array to send playlist, as shown below.
```json
{
    "playlists":[
        {
            "current_time": 0,
            "intensity": 100.0,
            "name": "Art",
            "notification_message": "",
            "playlist_id": 6,
            "status": PLAYLIST_STATUS_STOPPED,
            "waiting_triggers": false,
            "start_trigger":
            {
                "active": true,
                "conditions": {
                    "channel_number": 0,"threshold": 200,"universe": 100
                },
                "name": "Art-100-1-200",
                "playlist_id": 1,
                "position": 0,
                "type": TRIGGER_TYPE_ARTNET
            },
            "stop_trigger":
            {
                "active": true,"conditions": null,"name": "","playlist_id": 0,"position": 0,"type": TRIGGER_TYPE_NONE
            },
            "triggers":
            [
                {
                    "active": true,
                    "conditions": "/test_int",
                    "name": "Osc-/test",
                    "playlist_id": 4,
                    "position": 2000,
                    "type": TRIGGER_TYPE_OSC
                },
                {
                    "active": true,
                    "conditions": {
                        "channel_number": 0,
                        "threshold": 200,
                        "universe": 100
                    },
                    "name": "Art-100-1-200",
                    "playlist_id": 1,
                    "position": 4000,
                    "type": TRIGGER_TYPE_ARTNET
                }
            ],

        },
        {
            "current_time":0,
            "intensity":100.0,
            "name":"Art",
            "notification_message":"",
            "playlist_id":4,
            "start_trigger":
            {
                "active":true,
                "conditions":
                {
                    "channel_number":0,
                    "threshold":200,
                    "universe":100
                },
                "name":"Art-100-1-200",
                "playlist_id":1,
                "position":0,
                "type": TRIGGER_TYPE_ARTNET
            },
            "status":PLAYLIST_STATUS_PLAYING,
            "stop_trigger":
            {
                "active":true,
                "conditions":null,
                "name":"",
                "playlist_id":0,
                "position":0,
                "type": TRIGGER_TYPE_NONE
            },
            "triggers":[],
            "waiting_triggers": false
        }
    ]
}
```

#### STOP RECORD
This command will stop to record DMX frame from device. This will return the latest record time.
#### Request
```json
    {
        "command": STOP_RECORD_COMMAND,
    }
```
#### Response
```json
    {
        "result": true,
    }
```

#### SET PlaylistID 25 to Play
This will perform PLAY action, and return current state, timing and current cue of the playlist in question.
If loop_count is 0, Playlist will keep PLAYING, till another Action is performed on this Playlist
If playlist is currently PAUSED - it will be RESUMED, with PLAY
Playlist must be in STOP state, to be started from the beginning.
Playlist will Loop for 4 times more, after initial Play has ended. So, in total it plays for 5 times.
Playlist will STOP, once it reaches the end of final loop.
#### Request
```json
    {
        "command": PLAY_COMMAND,
        "playlist_id": 25,
        "loop_count": 4
    }
```
#### Response
It should return playlist status.
```json
    {
        "result": true,
    }
```

#### SET PlaylistID 25 to PAUSE
This will perform PAUSE action, and return current state, timing and current cue of the playlist in question.
If playlist is PLAYING - it will be PAUSED.
If playlist is PAUSED - it will be RESUMED
#### Request
```json
    {
        "command": PAUSE_COMMAND,
        "playlist_id": 25
    }
```
#### Response
```json
    {
        "result": true
    }
```

#### SET PlaylistID 25 to STOP
This will perform STOP action, and return current state, timing and current cue of the playlist in question.
Playlist will STOP immediately.
If Playlist is already Stopped, ignore STOP action.
#### Request
```json
    {
        "command": STOP_COMMAND,
        "playlist_id": 25
    }
```
#### Response
```json
    {
        "result": true
    }
```

#### GET INTENSITY OF CUE TRACK on PlaylistID 25
#### Request
Get the intensity of special playlist.
```json
    {
        "command": GET_TRACK_INTENSITY_COMMAND,
        "playlist_id": 25,
        "cue_track_id": 3
    }
```
#### Response - Playlist ID 25 is PLAYING Cue ID 5, current time is 450.5 sec (playlist begins at 0)
This will return
```json
    {
        "result": true,
        "fader_level": 75
    }
```

#### SET INTENSITY OF CUE TRACK on PlaylistID 25
This will update MASTER INTENSITY, and return current state, timing and current cue of the playlist in question.
Once the Fader Level is set, it must be maintained for this Playlist, even if the Playlist is stopped.
So a future PLAY, will use the last known Fader Level.
#### Request
It will return intensity value of track on playlist set by this command.
```json
    {
        "command": SET_TRACK_INTENSITY_COMMAND,
        "playlist_id": 25,
        "cue_track_id": 2,
        "fader_level": 75
    }
```
#### Response - Playlist ID 25 is PLAYING Cue ID 5, current time is 450.5 sec (playlist begins at 0)
It will return playlist's status.
```json
    {
        "result": true,
        "status": PLAYLIST_STATUS_PLAYING,
        "fader_level": 75
        "current_time": 0
        "cues": [
            {
                "id": 1508908097837,
                "cue_id": 4,
                "status": PLAYLIST_STATUS_PLAYING,
                "fader_level": 75,
                "current_time": 0
            },
            {
                "id": 1508908097837,
                "cue_id": 32,
                "status": PLAYLIST_STATUS_PLAYING,
                "fader_level": 100,
                "current_time": 0
            }
        ],
        "triggers" : [
            {
                "id": 2353465365,
                "trigger_id": 2,
                "trigger_type": 1,
                "waiting_string": "Start"
            }
        ]
    }
```

#### GET PLAYLIST INTENSITY on PlaylistID 25
Get the intensity of special playlist.
#### Request
```json
    {
        "command": GET_PLAYLIST_INTENSITY_COMMAND,
        "playlist_id": 25
    }
```
#### Response
It will return intensity of special playlist.
```json
    {
        "result": true,
        "fader_level": 75
    }
```

#### SET PLAYLIST INTENSITY on PlaylistID 25
This will update MASTER INTENSITY, and return current state, timing and current cue of the playlist in question.
Once the Fader Level is set, it must be maintained for this Playlist, even if the Playlist is stopped.
So a future PLAY, will use the last known Fader Level.
#### Request
```json
    {
        "command": SET_PLAYLIST_INTENSITY_COMMAND,
        "playlist_id": 25,
        "intensity": 75
    }
```

#### Response
Playlist ID 25 is PLAYING Cue ID 4 and 32, current time is 450.5 sec (playlist begins at 0)
```json
    {
        "result": true,
        "status": PLAYLIST_STATUS_PLAYING,
        "fader_level": 75,
        "current_time": 450500,
        "cues": [
            {
                "id": 1508908097837,
                "cue_id": 4,
                "status": PLAYLIST_STATUS_PLAYING,
                "fader_level": 75,
                "current_time": 450500
            },
            {
                "id": 1508908097837,
                "cue_id": 32,
                "status": PLAYLIST_STATUS_PLAYING,
                "fader_level": 100,
                "current_time": 450500
            }
        ],
        "triggers" : [
            {
                "id": 2353465365,
                "trigger_id": 2,
                "trigger_type": 1,
                "waiting_string": "Start"
            }
        ]
    }
```

#### UPDATE PLAYLIST
Update the properties of playlist with given filename and its time elements.
#### Request
```json
    {
        "command": UPDATE_PLAYLIST_COMMAND,
        "playlist_filename": "playlist2.json",
    }
```
#### Response
It should return true.
```json
    {
        "result": true
    }
```

#### DELETE PLAYLIST
Remove the playlist from active list (e.g. from PlayAll).
#### Request
```json
    {
        "command": DELETE_PLAYLIST_COMMAND,
        "playlist_id": 3,
    }
```
#### Response
It should return true.
```json
    {
        "result": true
    }
```

#### UPDATE SETTINGS
Update configuration and system parameters from database.
#### Request
```json
    {
        "command": UPDATE_SETTINGS_COMMAND,
        "command_type": UPDATE_SETTINGS_NTP
    }
```
#### Response
It should return true.
```json
    {
        "result": true
    }
```
###  PLAY ALL PLAYLISTS
Play all playlist in playlist storage.
#### Request
```json
    {
        "command": PLAY_ALL_PLAYLISTS_COMMAND
    }
```

#### Response
It should return true on success.
```json
    {
        "result": true,
    }
```

#### PAUSE ALL PLAYLISTS
Pause all running playlists.
#### Request
```json
    {
        "command": PAUSE_ALL_PLAYLISTS_COMMAND
    }
```
#### Response
It should return true on success.
```json
    {
        "result": true,
    }
```

#### STOP ALL PLAYLISTS
Stop all playing or paused playlist.
#### Request
```json
    {
        "command": STOP_ALL_PLAYLISTS_COMMAND
    }
```
#### Response
It should return true on success.
```json
    {
        "result": true,
    }
```

#### PLAY_CUE_COMMAND (not implemented)
Preview static or dynamic cue for the given cue id
#### Request
```json
    {
        "command": PLAY_CUE_COMMAND,
        "cue": 1
    }
```
#### Response
It should return cue previewing status.
```json
    {
        "result": true,
        "status": CUE_PLAY
    }
```

#### STOP_CUE_COMMAND (not implemented)
Stop previewing cue. and then the output should be stopped.
#### Request
```json
    {
        "command": STOP_CUE_COMMAND,
    }
```
#### Response
It should return cue preview status.
```json
    {
        "result": true,
        "status": CUE_STOP
    }
```

#### SET_PLAYLIST_TIME_POSITION on PlaylistID 25
Send request with needed timeline position for playlist playing currently, the position is set with current_time as float which represents seconds (ms after dot) and playlist_id
#### Request
```json
    {
        "command": SET_PLAYLIST_TIME_POSITION,
        "playlist_id": 25,
        "position": 10.55
    }
```
#### Response
```json
    {
        "result": true
    }
```

#### SET_MASTER_INTENSITY 
Set overall S-Play output intensity (Master Fader) with 50% brightness, doesn't persist after power cycle
#### Request
```json
    {
        "command": SET_MASTER_INTENSITY,
        "intensity": 0.5,
    }
```
#### Response
```json
    {
        "result": true
    }
```
#### OSC_MESSAGE 
Send OSC message to Playback to trigger existing OSC triggers
#### Request
```json
    {
        "command": OSC_MESSAGE,
        "address": "/test"
    }
```
#### Response
```json
    {
        "result": true
    }
```