#include "MeMCore.h"
MeRGBLed rgbled_7(7, 7==7?2:4);
MeLightSensor lightsensor_6(6);
int red_value;
int green_value;
int blue_value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  red_value = 0;
  blue_value = 0;
  green_value = 0;
  rgbled_7.setColor(0,255,0,0); // red
  red_value = lightsensor_6.read();
  delay(10);
  rgbled_7.setColor(0,0,255,0); // green
  green_value = lighsensor_6.read();
  delay(10);
  rgbled_7.setColor(0,0,0,255); // blue
  blue_value = lightsensor_6.read();
  delay(10);
  rgbled_7.setColor(0,0,0,0);
  Serial.print(red_value);
  Serial.print(", ");
  Serial.print(green_value);
  Serial.print(", ");
  Serial.println(blue_value);
  // add conditionals for the turning processes
}
