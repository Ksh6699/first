#include <Servo.h>

Servo myservo;   

int sensorPin = A0;
int val = 0;

void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}

void loop() {

  val = analogRead(sensorPin);
  Serial.print(val);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  Serial.println(val);
  delay(1000);
}
