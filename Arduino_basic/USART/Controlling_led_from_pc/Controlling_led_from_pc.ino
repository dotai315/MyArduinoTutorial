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
char received_data;
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
  pinMode(13, OUTPUT);
  /* END USER CODE 2 */
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE LOOP */
  /* BEGIN USER CODE 3 */
  if(Serial.available() > 0)
  {
    received_data = (char)Serial.read();

    Serial.print("received data is ");

    if(received_data == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println(received_data);
    }
    else if(received_data == '0')
    {
      digitalWrite(13, LOW);
      Serial.println(received_data);
    }
    else
    {
      Serial.println("invalid");
    }
  }
}
/* END USER CODE 3 */
