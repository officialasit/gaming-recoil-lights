#include <AccelStepper.h>
//#include "Keyboard.h"
int currentRandm = 0;
bool shouldClick = false;


void setup() {
  // open the serial port:
  Serial.begin(9600);
  pinMode(D2, OUTPUT);
  digitalWrite(D2, LOW);

}

void loop() {

  if (Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
    if(inChar == '2') {
      shouldClick = false;
    } else {
      shouldClick = true;
    }
  }   
  
  if (shouldClick) {
    // You can change Delay depending upon the game & gun's fire rate.
    digitalWrite(2, HIGH);
    delay(30);
    digitalWrite(2, LOW);
    delay(45);
  }
}
