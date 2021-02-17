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
  char message[] = "I am written in EEPROM";
  eeprom_write_block(message, (void*)100, strlen(message) + 1);
  char reserve[50];
  eeprom_read_block(&reserve, (void*)100, 50);
  Serial.begin(9600);
  Serial.println(message);
  Serial.println(strlen(message));
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
}
/* END USER CODE 3 */
