/*
  
  This sketch uses the Arduino GSM Shield to allow the user to send AT Commands to the GSM module 
  directly without needing the Arduino GSM Library. Aditionally you can use a button to send an SMS. 
  Upload this sketch, open a serial application like CoolTerm, and begin sending commands.
  
  Developed by Benedetta Simeonidis
  Modified by Edwin Reed-Sanchez 
  
*/

#include <SoftwareSerial.h>
SoftwareSerial mySerial(5, 6);
char inChar = 0;
const int buttonPin = 2;     // the number of the pushbutton pi

//Button
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize serial
  Serial.begin(9600);
  Serial.println("Device ready");
  
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);

  // initialize button
  pinMode(buttonPin, INPUT);
}

void loop() {

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // if the buttonState is pressed
  if (buttonState == 1) {
    
  mySerial.print("AT+CMGF=1"); // sets the SMS mode to text
  mySerial.print("\r"); // Cariage return / Enter Button / <CR>
  
  delay(1000);
  mySerial.print("AT+CMGS=\"12345147607\""); // send SMS to "PHONE_NUMBER"
  mySerial.print("\r");  // Cariage return / Enter Button / <CR>
  
  delay(1000);
  mySerial.print("Your button is pressed and sent over SMS");
  mySerial.print("\x1A"); // ctrl-z
  
  } else {

 if (mySerial.available()){
    inChar = mySerial.read();
    Serial.write(inChar);
    delay(5);
    }
    
  if (Serial.available()>0){
    mySerial.write(Serial.read());
    delay(5);
  } 
  }
}
