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
const int ledPin = 13;
int reading = 0;
SoftwareSerial receiver(8, 9);
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
  receiver.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  if(receiver.available() > 1)
  {
    byte h = receiver.read();
    byte l = receiver.read();
    reading = (h << 8) + l;
  }
  flash(reading);
}
/* END USER CODE 3 */
void flash(int rate)
{
  int period = (50 + (1023 - rate) / 4);
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}
