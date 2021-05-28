// C++ code
//
int ledpin = 7;
int sensepin = 1;
int val = (analogRead(sensepin));
int ledLevel = map (val , 750,900,255,0);
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  val = constrain (val ,750,900);
  analogWrite(ledpin , ledLevel);
}