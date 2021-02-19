#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  Serial.begin(9600);
  Serial.println("I am I2C Slave");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
}

void receiveEvent(int howMany)
{
  while(Wire.available() > 0)
  {
    char c= Wire.read();
    Serial.print(c);
  }
  Serial.println();
}

void requestEvent()
{
  Wire.write("Hi Master");
}
