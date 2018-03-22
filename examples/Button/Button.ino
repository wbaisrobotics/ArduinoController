#include "Button.hpp"

// Script will print to console once every time the button
// is newely pressed (only once until unpresses and presses again)
// Connect the pin to ground using a resistor on one side,
// and 5V on the other side (see Arduino's website)

// Initialize the button on port 12
Button button (12);

// Starts communication with console
void setup() {
   Serial.begin(9600);
}

void loop() {
  // Check if the button is newely pressed
  if (button.isPressed()){
    // If the button is pressed, log to console
    Serial.println("The button was pressed");
  }
}
