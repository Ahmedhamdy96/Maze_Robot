#include <SoftwareSerial.h> 

SoftwareSerial mySerial(10,11) ; 
void setup()
{
  Serial.begin(9600) ; 
  mySerial.begin(9600) ; 
}

String data = "" ; 

void loop()
{
  if(Serial.available())
  {
      data = Serial.readStringUntil('\n') ;  
      Serial.println(data) ; 
  }

  if(mySerial.available())
  {
    data = mySerial.readStringUntil('\n') ; 
    mySerial.println(data);    
  }
}
