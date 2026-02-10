#include <SoftwareSerial.h>
SoftwareSerial softSerial(10, 11);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  softSerial.begin(9600);
delay(500);
softSerial.println("AT");
Serial.println("AT");
delay(500);
Serial.println("AT+INQ");
softSerial.println("AT+INQ");
delay(20000);
delay(10000);
Serial.println("AT+CONN1");
softSerial.println("AT+CONN1");
delay(500);
}

void loop() {

}
