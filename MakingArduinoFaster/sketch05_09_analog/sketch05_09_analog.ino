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
const byte PS_128 = (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
const byte PS_16 = (1 << ADPS2);
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
  ADCSRA &= ~PS_128; // remove prescale of 128
  ADCSRA |= PS_16;   // add prescale of 16 MHz
  Serial.begin(9600);
  while(!Serial)
  {
    
  }
  Serial.println(PS_128, 2);
  Serial.println(PS_16, 2);
  Serial.println("Starting Test");
  long startTime = millis();

  long i = 0;

  for(i = 0; i < 1000000; ++i)
  {
    analogRead(A0);
  }
  long endTime = millis();

  Serial.println("Finished Test");
  Serial.print("Seconds Taken: ");
  Serial.println(float(endTime - startTime) / 10001);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
}
/* END USER CODE 3 */
