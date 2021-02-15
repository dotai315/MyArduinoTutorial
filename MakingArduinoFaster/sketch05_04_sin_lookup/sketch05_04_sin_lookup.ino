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
byte sin64[] = 
{
  127, 139, 151, 163, 175, 186, 197, 207, 216, 225, 232, 239, 244, 248, 251, 253, 254, 253, 251, 248, 244, 239, 232, 225, 216, 207, 197, 186, 175, 163, 151, 139,
  126, 114, 102, 90, 78, 67, 56, 46, 37, 28, 21, 14, 9, 5, 2, 0, 0, 0, 2, 5, 9, 14, 21, 28, 37, 46, 56,67, 78, 90, 102, 114, 126
};
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
  Serial.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  for(byte i = 0; i < 64; ++i)
  {
    analogWrite(A0, sin64[i]);
    Serial.println(sin64[i]);
    Serial.print(" ");
  }
  
}
/* END USER CODE 3 */
