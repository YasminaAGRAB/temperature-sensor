#include <SimpleDHT.h>

#include <SimpleDHT.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);


const float analogInPin = A0;  
const float analogOutPin = A2; 
float sensorValue = 0;        
float outputValue = 0; 
float sensorValueH = 0;          

void setup() {
  // initialize serial communications at 9600 bps:
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(analogInPin);
analogWrite(analogOutPin, sensorValue);
byte temperature = 0;
byte humidity = 0;
float t=0;float h=0;
dht11.read(&temperature, &humidity, NULL);
  t=(int)temperature;
  h=(int)humidity;
Serial.println(sensorValue);  
Serial.println(h);
Serial.println(t); 
delay(500);}


