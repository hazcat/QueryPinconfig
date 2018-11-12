/*
   Routines to print out a table of pins and how to read them.
   This data is all contained in pins_arduino.h but in a format that isn't as easy for me to read
*/

// this is set for compatibility with my other projects
// The baud rate here isn't significant
#define BAUD (57600)  



// Write a description of the digital pins to Serial out
// Note that the SupportsTimer field is significant in that PWM output needs to
// be disabled prior to reads and writes to a pin
void dump_digital_pinconfig() {
  Serial.println("DigitalPin,Port,Bitmask,Timer");

  for (uint8_t digital_pin = 0; digital_pin < NUM_DIGITAL_PINS; ++digital_pin) {
    Serial.print(digital_pin);
    Serial.print(",");

    uint8_t port = digitalPinToPort(digital_pin);
    if (port == NOT_A_PIN) {
      Serial.println("NOT_A_PIN,,,");
    } else {
      Serial.print(port);
      uint8_t bitmask = digitalPinToBitMask(digital_pin);
      uint8_t timer = digitalPinToTimer(digital_pin);
      Serial.print(",");
      Serial.print(bitmask, BIN);
      Serial.print(",");
      Serial.println(timer);
    }
  }
}

void setup() {
  Serial.begin(BAUD);
}

void loop() {
  dump_digital_pinconfig();
  delay(5000);
}
