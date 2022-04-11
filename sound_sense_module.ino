int soundSensor=2;
int LED=3;
//boolean LEDStatus=false;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);

}

void loop() {

  int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

        digitalWrite(LED,HIGH);
    }
    else{
        digitalWrite(LED,LOW);
    }
  }
