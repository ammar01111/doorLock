#include <Servo.h>
int photoRes = A1;
int servoPin = 9;
float slope = 4.33;
int photoVal;
int servoDeg;

Servo myServo;
void setup() {
  // put your setup code here, to run once:
pinMode(photoRes,INPUT);
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
photoVal = analogRead(photoRes);
servoDeg = (photoVal - 70)/(4.33);
myServo.write(servoDeg);
Serial.print(photoVal);
Serial.print(" ,");
Serial.println(servoDeg);
delay(0);
}
