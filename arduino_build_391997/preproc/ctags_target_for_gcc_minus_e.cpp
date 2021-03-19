# 1 "C:\\Temp\\sketch_mar19a\\sketch_mar19a.ino"
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,0x1);
pinMode(9,0x1);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=digitalRead(13);
  if(value==0x1)
  {
    Serial.println("Motion Detected");
    digitalWrite(9,0x1);
    delay(1000);
  }
  else
  {
    Serial.println("Motion not Detected");
      digitalWrite(9,0x0);
    delay(1000);
  }

}
