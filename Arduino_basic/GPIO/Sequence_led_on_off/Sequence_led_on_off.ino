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
  for(int i = 0; i < 4; ++i)
  {
    pinMode(i, OUTPUT);
  }
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  for(int i = 0; i < 4; ++i)
  {
    digitalWrite(i, HIGH);
    delay(1000);
  }

  for(int i = 3; i >= 0; --i)
  {
    digitalWrite(i, LOW);
    delay(1000);
  }
}
/* END USER CODE 3 */
