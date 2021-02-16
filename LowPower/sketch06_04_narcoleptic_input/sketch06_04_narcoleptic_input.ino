// private include 
/* BEGIN USER CODE PI */
#include <Narcoleptic.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
const int ledPin = 13;
const int inputPin = 2;
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
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  if(digitalRead(inputPin) == LOW)
  {
    doSomething();
  }
  Narcoleptic.delay(100);
}
/* END USER CODE 3 */
void doSomething()
{
  for(int i = 0; i < 20; ++i)
  {
    digitalWrite(ledPin, HIGH);
    Narcoleptic.delay(200);
    digitalWrite(ledPin, LOW);
    Narcoleptic.delay(200);
  }
}
