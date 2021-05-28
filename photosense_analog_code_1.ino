// C++ code
//
int photosense = 1;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(photosense));
  delay(1000); // Wait for 1000 millisecond(s)
}