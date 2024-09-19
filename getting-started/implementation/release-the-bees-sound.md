# 🐘 Release the bee’s sound

After identify the elephant, the sound of the bee is used to drive the elephant away. I use a 3v speaker to make the sound of the bee.3v Speaker must be connected to the ardunio board. It is explain by the following code and Diagram.



<figure><img src="../../.gitbook/assets/Screenshot 2024-09-13 154018.png" alt=""><figcaption><p>3V Speaker connect to the the Arduino board</p></figcaption></figure>

In here explain how to connect Speaker’s pin to Arduino board’s pin.

* Connect the speaker's positive lead (red wire) to the Arduino Uno's digital pin 3.
* Connect the speaker's negative lead (black wire) to the Arduino Uno's ground pin (GND).



**>> The arduino code used to connect the 3V speaker to the arduino board is given below.**

{% tabs %}
{% tab title="C++" %}
````cpp
```cpp
#include <PCM.h>

const unsigned char sample[] PROGMEM = {
 126, 127, 128, 128, 128, 128, 128, 127, 128, 128, 128, 129, 129, 128, 127, 128,
128, 127, 126, 127, 128, 129, 128, 127, 126,
 127, 128, 128, 126, 126, 127, 127, 127, 127, 127, 127, 126, 127, 129, 130, 129,
128, 126, 126, 126, 126, 127, 129, 130, 129,
 127, 127, 127, 127, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 128, 130,
131, 129, 127, 126, 126, 126, 127, 127, 128,
 128, 128, 128, 127, 128, 128, 127, 127, 128, 128, 130, 130, 129, 126, 125, 127,
129, 130, 129, 128, 126, 125, 126, 129, 131,
 131, 127, 123, 125, 129, 131, 130, 128, 126, 124, 125, 128, 129, 129, 129, 131,
130, 130, 130, 130, 128, 127, 129, 129, 129,
 131, 131, 131, 131, 132, 131, 130, 130, 130, 129, 128, 129, 129, 130, 132, 132,
131, 131, 131, 129, 126, 127, 128, 126, 127,
 128, 128, 128, 129, 130, 128, 128, 128, 129, 128, 128, 128, 126, 127, 128, 128,
128, 129, 130, 130, 130, 128, 127, 126, 127,
 128, 128, 129, 130, 130, 130, 130, 130, 128, 127, 129, 128, 127, 128, 129, 130,
129, 130, 129, 128, 128, 129, 129, 127, 128,
};

void setup()
{
 startPlayback(sample, sizeof(sample));
}
void loop()
{}
```
````
{% endtab %}
{% endtabs %}
