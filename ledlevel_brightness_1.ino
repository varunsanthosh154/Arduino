// C++ code
//
int switchPin = 7;
int ledPin = 11;
int ledLevel = 0;
boolean lastbutton = LOW;
boolean currentbutton = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

boolean debounce(boolean last)
{
  boolean current = digitalRead(switchPin);
  if (last != current)
  {
    delay(5);
    current=digitalRead(switchPin);
  }
  return current;
}

void loop()
{
  currentbutton = debounce(lastbutton);
  if (lastbutton == LOW && currentbutton == HIGH)
  {
    ledLevel = ledLevel + 51;
  }  
  lastbutton = currentbutton;
  if (ledLevel > 255) ledLevel=0;
  analogWrite(ledPin, ledLevel);
}  