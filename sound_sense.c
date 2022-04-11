const int relayPin = 11;
const int soundPin = 7;

int soundVal = 0;
int relayToggle = LOW;
int previousState = HIGH; 

void setup ()
{
  pinMode (relayPin, OUTPUT);
  pinMode (soundPin, INPUT);
}
 
void loop ()
{
  soundVal = digitalRead(soundPin);
  if (soundVal == LOW && previousState==HIGH)
  {
    relayToggle=!relayToggle;
    digitalWrite (relayPin, relayToggle);
  }
  previousState=soundVal;
}