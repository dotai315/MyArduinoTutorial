/* BEGIN PV */
const int ledPin = 13;
const int delayPeriod = 250;
/* END PV */

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  flash(20, delayPeriod);
  delay(3000);
}

void flash(int numFlash, int delayTime)
{
  for(int i = 0; i < numFlash; ++i)
  {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
  }
}
