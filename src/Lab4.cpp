/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/evanh/OneDrive/Desktop/CTD/InternetOfThings/Lab4/src/Lab4.ino"
/*
 * Project Lab4
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/evanh/OneDrive/Desktop/CTD/InternetOfThings/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D7, INPUT);
  pinMode(D6, OUTPUT);
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  bool value;

  value = (digitalRead(D7) == HIGH);

  if (value == true){
    digitalWrite(D6, HIGH);
  } else{
    digitalWrite(D6, LOW);
  }
}