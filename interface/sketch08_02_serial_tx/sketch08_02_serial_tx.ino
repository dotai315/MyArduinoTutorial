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
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  if(x > 100)
  {
    x = 0;
  }

  sendByte(x);
  x++;
  delay(1000);
}
/* END USER CODE 3 */
void sendByte(byte b)
{
  for(int i = 0; i < 8; ++i)
  {
    digitalWrite(dataPin, bitRead(b, 7 - i)); // set data high or low);
    delay(1);
    digitalWrite(clockPin, HIGH); // start of clock pulse
    delay(1);
    digitalWrite(clockPin, LOW);
    delay(1);
  }
}
