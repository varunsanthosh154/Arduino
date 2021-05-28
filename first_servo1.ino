// C++ code
//
#include<Servo.h>
Servo firstservo;
int servopin = 10;
void setup()
{
  firstservo.attach(servopin);
}

void loop()
{
 for (int i=0 ;i<180; i=i+20)
 {
   firstservo.write(i);
   delay(2000);
 }
}