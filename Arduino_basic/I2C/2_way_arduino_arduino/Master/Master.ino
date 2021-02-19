#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  Serial.println("I am I2C Master");
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(8);
  Wire.write("Hello Slave");
  Wire.endTransmission();

  Wire.requestFrom(8, 9);
  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
  }
  Serial.println();
  delay(1000);
}
