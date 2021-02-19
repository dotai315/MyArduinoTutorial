// private include 
/* BEGIN USER CODE PI */
#include <OneWire.h>
#include <DallasTemperature.h>
/* END USER CODE PI */

// private define 
/* BEGIN USER CODE PD */
/* END USER CODE PD */

// private macro 
/* BEGIN USER CODE PM */
/* END USER CODE PM */

// private variable 
/* BEGIN USER CODE PV */
const int busPin = 10;

OneWire bus(busPin);
DallasTemperature sensors(&bus);

DeviceAddress sensor;
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
  sensors.begin();
  if(!sensors.getAddress(sensor, 0))
  {
    Serial.println("NO DS18B20 FOUND!");
  }
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  sensors.requestTemperatures();
  float tempC = sensors.getTempC(sensor);
  Serial.println(tempC);
  delay(1000);
}
/* END USER CODE 3 */
