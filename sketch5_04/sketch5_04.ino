/* BEGIN PRIVATE VARIABLE */
char message[] = "Hello";
/* END PRIVATE VARIABLE */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE */
  /* BEGIN USER CODE */
  Serial.println(message);
  delay(1000);
}

/* BEGIN PRIVSTE FUNCTION */
/* END PRIVATE FUNCTION */
