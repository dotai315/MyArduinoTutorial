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
  Serial.begin(9600);
  Serial.println("Starting Test");
  long startTime = millis();
  long i = 0;
  long j = 0;
  for(i = 0; i < 2000000000; ++i)
  {
    j = i + i * 10;
    if(j > 10)
    {
      j = 0;
    }
    Serial.println(i);
  }
  long endTime = millis();
  float seconds = float(endTime - startTime) / 1000.0;
  Serial.println(j);
  Serial.println("Finished Test");
  Serial.print("Seconds taken: ");
  Serial.println(seconds);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
}
/* END USER CODE 3 */
