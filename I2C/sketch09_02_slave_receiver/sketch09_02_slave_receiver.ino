// private include 
/* BEGIN USER CODE PI */
#include <Wire.h>
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
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  delay(100);
}
/* END USER CODE 3 */
void receiveEvent(int howMany)
{
  while(1 < Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
  }
  int x = Wire.read();
  Serial.println(x);
}
