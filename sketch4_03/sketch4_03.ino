/* BEGIN PV */
const int ledPin = 13;
const int delayPeriod = 250;
/* END PV */

/* BEGIN SETUP */
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}
/* END SETUP */

/* BEGIN LOOP */
void loop() {
  // put your main code here, to run repeatedly:
  /* END LOOP */
  
  /* BEGIN USER CODE */
  int count = 0;

  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  count++;
  
  if(count == 20)
  {
    count = 0;
    delay(3000);
  }
  /* END USER CODE */
}
