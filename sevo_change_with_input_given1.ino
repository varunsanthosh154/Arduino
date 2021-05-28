// C++ code
//
#include<Servo.h>
Servo secservo;
int servopin= 3;


void setup()
{
  secservo.attach(servopin);
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available()== 0);
  int value = Serial.read() - '0';
  int pos = map(value , 0 , 5, 0 , 90);
  secservo.write(pos);
}