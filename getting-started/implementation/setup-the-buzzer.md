# 🐘 Setup the Buzzer

Upon detecting the presence of an elephant, the system triggers an alarm to alert the local residents. This alarm can be activated through a buzzer or a similar audio output device that produces a loud and distinctive sound. The purpose of the alarm is to immediately draw attention to the fact that an elephant has entered the danger zone. Buzzer must be connected to the ardunio board.It is explain by the following code and Diagram.



<figure><img src="../../.gitbook/assets/Screenshot 2024-09-13 154522.png" alt=""><figcaption><p>Buzzer connect to the Ardunio board</p></figcaption></figure>

In here explain how to connect Buzzer’s pin to Arduino board pin.

* Connect the buzzer's positive lead (red wire) to the Arduino Uno's digital pin 9.
* Connect a 100 ohm resistor to the buzzer's negative lead (black wire).
* Connect the resistor's other lead to the Arduino Uno's ground pin (GND).

**>> The arduino code used to connect the Buzzer to the arduino board is given below.**



{% tabs %}
{% tab title="JavaScript" %}
````cpp
```cpp
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define LED 2
#define Buzzer 3
#define Sensor A1

void setup() {
 Serial.begin(9200);
 lcd.init();
 lcd.backlight();
 pinMode(LED, OUTPUT);
 pinMode(Buzzer, OUTPUT);
}

void loop() {
 int value = analogRead(Sensor);
 lcd.setCursor(0, 0);
 lcd.print("Value :");
 lcd.print(value);
 lcd.print(" ");
 if (value > 400) {
 digitalWrite(LED, HIGH);
 digitalWrite(Buzzer, HIGH);
 lcd.setCursor(0, 1);
 lcd.print("Identify the elephant");

 } else {
 digitalWrite(LED, LOW);
 digitalWrite(Buzzer, LOW);
 lcd.setCursor(0, 1);
 lcd.print(" ");
 }
}
```
````
{% endtab %}
{% endtabs %}
