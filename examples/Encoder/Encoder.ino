#include "Encoder.h"

// Initialize the encoder with 
Encoder encoder (12, 13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(encoder.get())
}
