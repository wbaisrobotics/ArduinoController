#include "Switch.hpp"

// Script will print to console once every time the limit switch
// is newely pressed (only once until unpresses and presses again)

// Initialize the limit switch on port 12
Switch limitSwitch (12);

// Starts communication with console
void setup() {
   Serial.begin(9600);
}

void loop() {
  // Check if the limit switch is newely pressed
  if (limitSwitch.isPressed()){
    // If the limit switch is pressed, log to console
    Serial.println("The limit switch was pressed");
  }
}
