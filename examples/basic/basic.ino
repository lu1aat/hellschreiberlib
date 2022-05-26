#include <Arduino.h>

// Import library
#include <Hell.h>

// Set Hell library to work with PIN number 8
Hell hell(8);

// Setup
void setup() {
}

// Loop
void loop() {
  // TX
  hell.tx("0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  
  delay(9000);
}