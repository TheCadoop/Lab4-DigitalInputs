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