
#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);
void setup()
{
 mySerial.begin(9600
 Serial.begin(9600);
 delay(100);

}
void loop()
{
 if (Serial.available()>0)
 switch(Serial.read())
 {
 case 's':
 SendMessage();
 break;
 case 'r':
 RecieveMessage();
 break;
 }
if (mySerial.available()>0)
 Serial.write(mySerial.read());
}

void SendMessage()
{
 mySerial.println("AT+CMGF=1"); //Sets the GSM Module in Text Mode
 delay(1000); // Delay of 1000 milli seconds or 1 second
mySerial.println("AT+CMGS=\"+94769303539\"\r");
 delay(1000);
 mySerial.println("The elephant is now near the village");
delay(100);
 mySerial.println((char)26);// ASCII code of CTRL+Z
 delay(1000);
}
void RecieveMessage()
{
 mySerial.println("AT+CNMI=2,2,0,0,0"); delay(1000);
}