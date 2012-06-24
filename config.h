//rfid stuff:
#define rxPin 2
#define txPin 3 // not used

// web stuff:
byte mac[] = {  0x12, 0xAD, 0xBE, 0xEF, 0xEF, 0xDE };
byte ip[] = { 192,168,111,179 }; // 178 is the door opener.
byte gateway[] = { 192,168,111,254 };
byte subnet[] = { 255, 255, 0, 0 };
byte server[] = { 192,168,111,178 }


const boolean enableSerial = true;
