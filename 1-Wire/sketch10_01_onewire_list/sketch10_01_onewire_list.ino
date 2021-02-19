// private include 
/* BEGIN USER CODE PI */
#include <OneWire.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
OneWire bus(10);
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
  byte address[8];
  while(bus.search(address))
  {
    for(int i = 0; i < 7; ++i)
    {
      Serial.print(address[i], HEX);
      Serial.print(" ");
    }

    if(OneWire::crc8(address, 7) == address[7])
    {
      Serial.println(" CRC OK");
    }
    else
    {
      Serial.println(" CRC FAIL");
    }
  }
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
}
/* END USER CODE 3 */
