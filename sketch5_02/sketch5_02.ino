/* BEGIN PRIVATE VARIABLE */
const int ledPin = 13;
int durations[] = {200, 200, 200, 500, 500, 500, 200, 200, 200};
/* END PRIVATE VARIABLE */

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END 0 USER CODE */
  /* BEGIN 0 USER CODE */
  for(int i = 0; i < 9; ++i)
  {
    flash(durations[i]);
  }
  delay(3000);
}

/* BEGIN PRIVATE FUNCTION */
void flash(int delayPeriod)
{
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
}
/* END PRIVATE FUNCTION */
