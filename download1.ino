// C++ code
// Reads the state of button and displays it on screen
int buttonPin = 7;
void setup()
{
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  //Allows us to listen to serial communications from arduino
}

void loop()
{
  Serial.println(digitalRead(buttonPin));
  delay(1000); // Wait for 1000 millisecond(s)
}