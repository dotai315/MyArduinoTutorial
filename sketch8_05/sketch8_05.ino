// private include 
/* BEGIN USER CODE PI */
#include <avr/eeprom.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
const int maxPasswordSize = 20;

char password[maxPasswordSize];
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
  eeprom_read_block(&password, 0, maxPasswordSize);
  Serial.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  Serial.print("Your password: ");
  Serial.println(password);
  Serial.print("Enter new password: ");
  while(!Serial.available())
  {
    
  }
  int n = Serial.readBytesUntil('\n', password, maxPasswordSize);
  password[n] = '\0';
  eeprom_write_block(&password, 0, maxPasswordSize);
  Serial.print("Save password: ");
  Serial.println(password);
}
/* END USER CODE 3 */
