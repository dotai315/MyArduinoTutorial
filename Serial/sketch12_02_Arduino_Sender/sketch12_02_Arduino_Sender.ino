// private include 
/* BEGIN USER CODE PI */
#include <SoftwareSerial.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
const int readingPin = A1;
const int plusPin = A2;
const int gndPin = A0;

SoftwareSerial sender(8, 9);
/* END USER CODE PV */

/* BEGIN USER CODE 0 */
/* END USER CODE 0 */

// private function 
/* BEGIN USER CODE PF */
/* END USER CODE PF */

/* BEGIN USER CODE 1 */
/* END USER CODE 1 */

void setup() {
  // put your setup code here, to run once:
  /* BEGIN USER CODE 2 */
  pinMode(gndPin, OUTPUT);
  pinMode(plusPin, OUTPUT);
  digitalWrite(plusPin, HIGH);
  sender.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  int reading = analogRead(readingPin);
  byte h = highByte(reading);
  byte l = lowByte(reading);
  sender.write(h);
  sender.write(l);
  delay(1000);
}
/* END USER CODE 3 */
