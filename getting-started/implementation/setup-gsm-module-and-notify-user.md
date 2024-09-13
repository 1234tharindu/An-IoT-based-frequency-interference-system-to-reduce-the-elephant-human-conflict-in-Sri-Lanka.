# 🦣 Setup GSM Module & Notify user

In addition to the audible alarm and bee sound playback, the system also employs a SIM900 GSM module for wireless communication. This module enables the system to send messages or notifications to the local residents, informing them of the elephant's entry into the danger zone. The system can be programmed to automatically send a message with relevant information, such as the location and time of the elephant sighting, to the residents' mobile phones. SIM900 GSM module must be connected to the ardunio board.It is explain by the following code and Diagram.



<figure><img src="../../.gitbook/assets/Screenshot 2024-09-13 154705.png" alt=""><figcaption><p>SIM900 GSM module connect to the Ardunio board</p></figcaption></figure>

In here explain how to connect SIM900 GSM module’s pin to Arduino board’s pin.

* Connect the SIM900 GSM module's 5V pin to the Arduino Uno's 5V pin.
* Connect the SIM900 GSM module's GND pin to the Arduino Uno's GND pin.
* Connect the SIM900 GSM module's RX pin to the Arduino Uno's TX pin (digital pin 0).
* Connect the SIM900 GSM module's TX pin to the Arduino Uno's RX pin (digital pin 1).
* 100 ohm resistor, connect it between the SIM900 GSM module's TX pin and the Arduino Uno's RX pin.
