// C++ code
// 
int ledPin = 13;
int switchPin =7;  
boolean lastbutton = LOW;
boolean ledOn=false;
  
  void setup()
  {
   pinMode(switchPin,INPUT);
   pinMode(ledPin, OUTPUT);
  }

  void loop()
  {
   if (digitalRead(switchPin) == HIGH && lastbutton==LOW)
   {
    ledOn = !ledOn;
    lastbutton = HIGH;
   }
   else
   {  
    lastbutton = digitalRead(switchPin);
   }
   digitalWrite(ledPin, ledOn);
  }  