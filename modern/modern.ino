#include <Wire.h>
#include "Adafruit_MPR121.h"


//Init capaciteurs
Adafruit_MPR121 cap = Adafruit_MPR121();
uint16_t lasttouched = 0; 
uint16_t currtouched = 0;

void setup() {
  delay(2000);
  Serial.begin(9600);
  Serial.println("=== Modern times !!! ==="); 

  setupCapacitors();
}

void setupCapacitors(){
 if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!"); 
}

void loop() {
  loopCapacitors();
}

void loopCapacitors(){
  // Get the currently touched pads
  currtouched = cap.touched();
  
  for (uint8_t i=0; i<12; i++) {
    // it if *is* touched and *wasnt* touched before, alert!
    if ((currtouched & _BV(i)) && !(lasttouched & _BV(i)) ) {
      Serial.print(i); Serial.println(" touched");
    }
    // if it *was* touched and now *isnt*, alert!
    if (!(currtouched & _BV(i)) && (lasttouched & _BV(i)) ) {
      Serial.print(i); Serial.println(" released");
    }
  }

  // reset our state
  lasttouched = currtouched;
}
