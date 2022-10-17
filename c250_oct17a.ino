#include "thingProperties.h"
int ledPin = 19;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  delay(1500); 

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  delay(100);
}

void onLedChange()  {
  if(led == 1){
    digitalWrite(ledPin , HIGH);
    Serial.println("on");
  }
  else{
    digitalWrite(ledPin , LOW);
    Serial.println("off");
  }
}
