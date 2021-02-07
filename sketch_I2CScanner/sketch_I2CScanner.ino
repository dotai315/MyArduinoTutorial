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
  Wire.begin();
  Serial.begin(9600);
  while(!Serial);
  Serial.println("\nI2C Scanner");
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  byte error, address;
  int nDevices;
  
  Serial.println("Scanning...");

  nDevices = 0;
  for(address = 1; address < 127; ++address)
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if(error == 0)
    {
      Serial.print("I2C found at address 0x");
      if(address < 16)
      {
        Serial.print("0");
      }
      Serial.print(address, HEX);
      Serial.println("!");
      nDevices++;
    }
    else if(error == 4)
    {
      Serial.print("Unknown error at address 0x");
      if (address<16)
      {
        Serial.print("0");
      }
      Serial.println(address,HEX);
    }
  }
  if(nDevices == 0)
    Serial.println("No I2C devices found\n");
  else
    Serial.println("done\n");
 
  delay(5000);           // wait 5 seconds for next scan
}
/* END USER CODE 3 */
