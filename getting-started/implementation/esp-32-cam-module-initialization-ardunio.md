# 🦣 ESP 32 cam module initialization Ardunio

The ESP32 CAM module, equipped with the integrated model, is then installed in the designated danger area where elephants are known to appear. When an elephant enters the monitored region, the ESP32 CAM captures an image of the elephant. Camera module must be connected to the ardunio board and roboflow elephant detection model and it is done by the following code and Diagram.



<figure><img src="../../.gitbook/assets/1234567489.png" alt=""><figcaption><p>ESP 32 cam module connect to the Arduino board</p></figcaption></figure>

In here explain how to connect ESP32 CAM module’s pin to Arduino board’s pin.

* Connect the ESP32-CAM module's 5V and GND pins to the Arduino Uno's 5V and GND pins.
* Connect the ESP32-CAM module's TX pin to the Arduino Uno's RX pin.
* Connect the ESP32-CAM module's RX pin to the Arduino Uno's TX pin.
* If you are using a logic level converter, connect the ESP32-CAM module's TX and RX pins to the logic level converter's input pins.
* Connect the logic level converter's output pins to the Arduino Uno's TX and RX pins.
