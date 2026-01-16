#define LED_PIN 13  // Built-in LED on Uno

void setup() {
  Serial.begin(9600);
  delay(1000);
  
  // Set all digital pins 2-13 as OUTPUT (skip 0 and 1 which are RX/TX)
  for(uint8_t pin = 2; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
  
  Serial.println("Pin test started - all pins 2-13 will toggle HIGH/LOW");
}

void loop() {
  // Set all pins HIGH and LED ON
  for(uint8_t pin = 2; pin <= 13; pin++) {
    digitalWrite(pin, HIGH);
  }
  Serial.println("All pins HIGH - LED ON");
  delay(2000);
  
  // Set all pins LOW and LED OFF
  for(uint8_t pin = 2; pin <= 13; pin++) {
    digitalWrite(pin, LOW);
  }
  Serial.println("All pins LOW - LED OFF");
  delay(2000);
}
