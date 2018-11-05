/**
 *  Someone with the bot verify this pls. I'm not entirely sure if this is how the IR 
 *  code shld be written, or if the interfacing with RJ25 is supposed to be like this.
 *  Need to integrate this into the main code. Use Serial.print() to verify the IR 
 *  readings, and revalue the 5 to the correct threshold. Once verified u can remove
 *  the print statements.
 */


#include "MeMCore.h"

int left_sensor; // within s1
int right_sensor; // on s2
int power = 11;
int PORT_1 = 1;
MePort MePort(PORT_1);

void setup() {
  Serial.begin(9600);
  pinMode(power, INPUT);
}
void loop() {
  digitalWrite(power, HIGH);
  left_sensor = MePort.aRead1();
  Serial.print(left_sensor);
  Serial.print(" ");
  Serial.println(right_sensor);
  right_sensor = MePort.aRead2();
  if (left_sensor <= 5) {
    move(4, 255);
    delay(5);
  }
  if (right_sensor <= 5) {
    move(3, 255);
    delay(5);
  }
}
 
