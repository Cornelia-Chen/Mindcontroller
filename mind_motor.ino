#define ENABLE 5 
#include <Brain.h>
#include <SoftwareSerial.h>

//Brain brain(Serial);
SoftwareSerial softSerial(10, 11);

// Set up the brain reader, pass it the software serial object you want to listen on.
Brain brain(softSerial);

int i; 
int switchState = 0; // variable for reading the switch's status
int writeValue;
int Meditation;

void setup() {
    // Start the software serial.
    softSerial.begin(9600);

    // Start the hardware serial.
    Serial.begin(9600);
    //to connect the slave bluetooth.
    softSerial.println("AT");
Serial.println("AT");
delay(500);
Serial.println("AT+INQ");
softSerial.println("AT+INQ");
delay(20000);
Serial.println("AT+CONN1");
softSerial.println("AT+CONN1");
delay(500);
     pinMode(ENABLE,OUTPUT);  
  // initialize the switch pin as an input:
 pinMode(Meditation, INPUT);
 Serial.begin(9600);
}

void loop() {
    // Expect packets about once per second.
    // The .readCSV() function returns a string (well, char*) listing the most recent brain data, in the following format:
    // "signal strength, attention, meditation, delta, theta, low alpha, high alpha, low beta, high beta, low gamma, high gamma"
    if (brain.update()) {
        Serial.println(brain.readErrors());
        Serial.println(brain.readCSV());
        // read the state of the switch value:
  switchState = (brain.readMeditation());
  writeValue =(255./1023.)*switchState;
  analogWrite(ENABLE, writeValue);
  delay(200);
 Serial.print("The read value form mindflex(0-100):");
 Serial.println(switchState);
 delay(100);
 Serial.print("You are writing a value of (0-24.9):");
Serial.println(writeValue);
 delay(100);

if(writeValue>=10 && writeValue<=24.9)
 {
//     analogWrite(ENABLE,HIGH); //turn on
   digitalWrite(ENABLE,HIGH); //enable on 
    delay(20000);
 }
 else {
    analogWrite(ENABLE,LOW);//turn off DC motor
    delay(2000);
 }
    }
}
