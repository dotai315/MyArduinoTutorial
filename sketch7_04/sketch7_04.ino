// private include 
/* BEGIN USER CODE PI */
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
const int interruptPin = 2;
const int ledPin = 13;
int period = 500;
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
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(0, goFast, FALLING);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}
/* END USER CODE 3 */

void goFast()
{
  period = 100;
}
