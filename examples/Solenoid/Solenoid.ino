#include "Solenoid.hpp"

// Initialize the solenoid on pin 13
Solenoid solenoid (13);

void setup() {
}

// Move the solenoid to forward position, wait 5 seconds, move the solenoid to reverse position, wait 5 seconds
void loop() {
  
 solenoid.forward();
 delay (5000);

 solenoid.reverse();
 delay (5000);
  
}
