#include "RangedEncoder.hpp"

// Initialize the encoder with pin 12 for A, 13 for B, 0 as the lower limit and 10 as the upper limit
RangedEncoder encoder (12, 13, 0, 10);

// Initialize communication with console through Serial
void setup() {
  Serial.begin(9600);
}

// Send to console the current count of the encoder
void loop() {
  Serial.println(encoder.get());
}
