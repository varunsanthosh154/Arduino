// C++ code
//
#include<Servo.h>
Servo secservo;
int servopin= 11;


void setup()
{
  secservo.attach(servopin);
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available()== 0);
  int value = Serial.read() - '0';
  int i=0;
  
  if (value == 1)
  {
    Serial.println(value);
    i = i + 90;
    secservo.write(i);
  }
  else if(value == 0)
  {
    Serial.println(value);
    i=i-90;
    secservo.write(i);
  }
  else
  {
    Serial.println("Invalid");
    secservo.write(0);
    Serial.flush();
  }
}