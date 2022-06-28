/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/cademissner/Desktop/IoT/Lab4-DigitalInputs/src/Lab4-DigitalInputs.ino"
void setup();
void loop();
#line 1 "/Users/cademissner/Desktop/IoT/Lab4-DigitalInputs/src/Lab4-DigitalInputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED); 

#define INPUT_PIN D7
#define OUTPUT_PIN D5

void setup() {
  pinMode(INPUT_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(INPUT_PIN)) {
    digitalWrite(OUTPUT_PIN, HIGH);
  }
  else {
    digitalWrite(OUTPUT_PIN, LOW);
  }
}