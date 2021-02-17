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
const int dataPin = 5;
const int clockPin = 6;

byte x = 0;
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
  pinMode(dataPin, INPUT_PULLUP);
  pinMode(clockPin, INPUT_PULLUP);
  Serial.begin(9600);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  byte x = 0;
  for(int i = 0; i < 8; ++i)
  {
    while(digitalRead(clockPin) == LOW);
    x = x << 1;
    x += digitalRead(dataPin);
    while(digitalRead(clockPin) == HIGH);
  }
  Serial.println(x);
}
/* END USER CODE 3 */
