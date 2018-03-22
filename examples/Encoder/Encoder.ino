#include "Encoder.hpp"

// Initialize the encoder with pin 12 for A and 13 for B
Encoder encoder (12, 13);

// Initialize communication with console through Serial
void setup() {
  Serial.begin(9600);
}

// Send to console the current count of the encoder
void loop() {
  Serial.println(encoder.get());
}
