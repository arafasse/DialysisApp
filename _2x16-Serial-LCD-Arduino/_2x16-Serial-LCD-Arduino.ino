const int TxPin = 18; //TX1 on Mega

#include <SoftwareSerial.h>
SoftwareSerial mySerial = SoftwareSerial(255, TxPin);

void setup() {
    
  pinMode(TxPin, OUTPUT);
  digitalWrite(TxPin, HIGH);
  
  mySerial.begin(9600);
  delay(100);
  mySerial.write(12);                 // Clear             
  mySerial.write(17);                 // Turn backlight on
  delay(5);                           // Required delay
  delay(3000);                        // Wait 3 seconds
  mySerial.print("Hello, world...");  // First line
  mySerial.write(13);                 // Carriage Return
  mySerial.print("from Parallax!");   // Second line
  mySerial.write(212);                // Quarter note
  mySerial.write(220);                // A tone
  delay(3000);                        // Wait 3 seconds
  mySerial.write(18);                 // Turn backlight off

}

void loop() {
}
