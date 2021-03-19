#include <Arduino.h>
#line 1 "C:\\Temp\\sketch_mar19a\\sketch_mar19a.ino"
#line 1 "C:\\Temp\\sketch_mar19a\\sketch_mar19a.ino"
void setup();
#line 8 "C:\\Temp\\sketch_mar19a\\sketch_mar19a.ino"
void loop();
#line 1 "C:\\Temp\\sketch_mar19a\\sketch_mar19a.ino"
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=digitalRead(13);
  if(value==HIGH)
  {
    Serial.println("Motion Detected");
    digitalWrite(9,HIGH);
    delay(1000);
  }
  else
  {
    Serial.println("Motion not Detected");
      digitalWrite(9,LOW);
    delay(1000);
  }

}

