#include "PWMMotorController.hpp"

// Initialize the motor on pin 11
PWMMotorController motor (11);

void setup() {
}

// Runs the motor for five seconds in full speed forward, five seconds stopped, and then five seconds reverse
void loop() {
  
  // Full speed forward
  motor.set (1.0);
  delay (5000);

  // Stop
  motor.set (0.0);
  delay (5000);

  // Full speed reverse
  motor.set (-1.0);
  delay (5000);
  
}
