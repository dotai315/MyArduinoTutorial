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
const int readPin = A0;
boolean sendRead = true;
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
  if(Serial.available())
  {
    char ch = Serial.read();
    if(ch == 'g')
    {
      sendRead = true;
    }
    else if(ch == 's')
    {
      sendRead = false;
    }
  }
  if(sendRead)
  {
    int reading = analogRead(readPin);
    Serial.println(reading);
    delay(1000);
  }
}
/* END USER CODE 3 */
