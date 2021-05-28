// C++ code
//
int ledpin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  while (Serial.available()==0);
  int val = Serial.read() - '0'; //read input
  if (val == 1)
  {
    Serial.println("The led is on");
    digitalWrite(ledpin , HIGH);
  }
  else if (val == 0)
  {
    Serial.println("The led is off");
    digitalWrite(ledpin , LOW);
  }
  else
  {
    Serial.println("Invalid");
  }
  Serial.flush();
}