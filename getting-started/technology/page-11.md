# 🦣 Approach Technology

* **IoT(Internet of Things):**&#x20;

In order to address the significant challenges posed by the human-elephant conflict in Sri Lanka, researchers are conducting studies utilizing IoT (Internet of Things) technology and bee sounds. The aim is to develop innovative solutions that effectively reduce the conflict and its negative impacts on the economy, environment, and society.&#x20;

The use of IoT technology involves the deployment of various interconnected devices and sensors in the conflict-prone areas. These devices are designed to collect and transmit real-time data on elephant movement, behavior, and proximity to human settlements or agricultural lands. By leveraging IoT, researchers can gather comprehensive information and gain insights into the patterns and triggers of human-elephant conflict.

In addition to IoT technology, the study incorporates the use of bee sounds as a natural deterrent for elephants. Elephants have a natural aversion to the sound of bees and tend to avoid areas where beehives are present. By strategically placing beehive boxes equipped with sensors in vulnerable areas, researchers can detect elephant movements and deploy pre-recorded bee sounds as a deterrent. This innovative approach aims to create a barrier and redirect elephants away from 39 human settlements or agricultural fields, thereby reducing the potential for conflicts.

By combining IoT technology for data collection and analysis with the use of bee sounds as a deterrent, researche hope to create an effective and sustainable solution to minimize the human-elephant conflict in Sri Lanka. The integration of technology and nature-based strategies holds promise for mitigating the economic, environmental, and social impacts associated with the conflict, fostering coexistence between humans and elephants.

* **Arduino**&#x20;

Here, I mainly use arduino technology to design this system. I Used the Arduino Uno Board. First, the elephant is identified in this system. In the process of identifying the elephant, I use an Esp32 cam module to capture the elephant.

_**Elephant Recognition**_&#x20;

1. **Hardware Setup:** The system is built around Arduino technology, specifically utilizing an Arduino board (e.g., Arduino Uno, Arduino Nano) as the core controller. Additionally, i use an ESP32 CAM module, which is a development board equipped with an ESP32 microcontroller and a camera module. The ESP32 CAM module is compatible with Arduino, making it suitable for this application.
2. **Image Capture:** Once an image is captured by the camera, it is processed by the ESP32 microcontroller. The ESP32 is capable of performing basic image processing tasks such as resizing, cropping, and converting image formats.
3. **Elephant Recognition:** The machine learning model for elephant recognition, which was trained using Roboflow and object detection algorithms as described earlier, is integrated with the ESP32 CAM module. The ESP32 microcontroller runs the trained machine learning model and passes the captured image through it.
4. **Identifying Elephants:** The machine learning model analyzes the image and looks for visual patterns and features that correspond to elephants based on its training. If an elephant is present in the captured image, the model will be able to detect and identify it.
5. **Output:** The output of the identification process is a determination of whether an elephant is present in the image or not. The system can provide this information in google drive.

_**Driving away the elephant using the sound of bees**_

After identifying the elephant, driving away the elephant is the second part of this. I will use the voice of the bee for that. In particular, I will use a speaker for that. Here the speaker will be connected to the arduino board. There I will use a 3.5v type speaker. A BD139 transistor is used for the speaker.

1. **Role of the Speaker:** As mentioned earlier, the speaker is used to play back the bee sounds, which are known to deter elephants. The bee sounds will create a deterrent effect, encouraging the elephant to move away from the vulnerable area.
2. **Choosing the Speaker:** I using a 3.5V speaker. the speaker's impedance and power rating are compatible with the BD139 transistor and the Arduino's output capabilities. The speaker's specifications, such as impedance (measured in ohms) and power rating (measured in watts), should be within the safe limits for the transistor and the Arduino's digital pin output.
3. **Connecting the Speaker to Arduino:** To connect the speaker to the Arduino, you will typically connect one terminal of the speaker to the BD139 transistor's collector pin (C) and the other terminal to the BD139 transistor's emitter pin (E). The base pin (B) of the BD139 will be connected to one of the Arduino's digital output pins.
4. **Using the BD139 Transistor:** The BD139 transistor acts as a switch to control the flow of current to the speaker. When the Arduino's digital output pin connected to the base of the BD139 goes HIGH (logic level 1), it allows current to flow from the collector to the emitter, effectively turning on the speaker. When the digital output pin goes LOW (logic level 0), the transistor turns off, cutting off the current flow to the speaker and turning it off.
5. **Controlling the Speaker with Arduino:** In the code, you will control the output to the speaker by setting the digital output pin connected to the base of the BD139 to HIGH or LOW based on whether you want to play the bee sounds or turn off the speaker.
6. **Playing Bee Sounds:** To create the deterrent effect, you can follow the steps mentioned earlier to play the bee sounds using the Arduino and the connected speaker. You will send the appropriate signals to the speaker, creating the buzzing bee sounds that discourage elephants from the area.

_**As the awareness of the vulnerable area**_

In this part, a short message about the location of the elephant will be sent to the people of the village through a GSM module. I will use a SIM900 GSM module. This module is connected to the arduino board.

1. **Role of the SIM900 GSM Module:** The SIM900 GSM module allows the Arduino to communicate with the cellular network and send/receive messages via SMS (Short Message Service). In this system, the module's purpose is to send a short message to the people in the village, notifying them about the presence of the elephant and its location.
2. **Connecting the SIM900 GSM Module to Arduino:** The SIM900 GSM module can be connected to the Arduino using serial communication. It usually requires connecting the TX (Transmit) and RX (Receive) pins of the GSM module to the corresponding RX and TX pins of the Arduino, respectively. Additionally, you will need to connect the module's power supply (usually 5V) and GND (ground) pins to the appropriate pins on the Arduino.
3. **GSM Module Control:** To use the GSM module for sending SMS, you will need to send AT commands to the module through the Arduino's serial interface. AT commands are specific command strings recognized by GSM modules to perform various functions, including sending SMS.
4. **Sending the SMS:** In my Arduino code, you will include commands to communicate with the GSM module and send the desired SMS message. The message can include information about the elephant's presence, the location (latitude and longitude), and any other relevant details.
5. **Interfacing with Elephant Detection:** To integrate the GSM module with the elephant detection part of the system, you will need to coordinate the processes. When the elephant is detected by the machine learning model and the bee sounds are activated, your code can also trigger the GSM module to send the SMS notification to the village residents.
6. **SIM Card Requirement:** To use the SIM900 GSM module, you will need to insert a valid SIM card from a cellular service provider into the module. The SIM card is essential for communication with the mobile network.

By combining the functionality of the SIM900 GSM module with the elephant detection and deterrent components, you can create a comprehensive system that promptly alerts the village residents about the presence of an elephant in the vulnerable area, allowing them to take necessary precautions and ensure the safety of both humans and elephants.

In addition, a warning message will be issued by a buzzer to warn the villagers that the elephant has reached the border of the village. I will connect a buzzer to the Arduino uno board.

1. **Selecting the Buzzer:** First, i needed to choose a suitable buzzer for application. Buzzer modules often come with built-in oscillators, making them easy to use with Arduino.
2. **Connecting the Buzzer to Arduino:** To connect the buzzer to the Arduino, you will need to identify the two terminals of the buzzer. Typically, a buzzer has a positive (+) and a negative (-) terminal. The positive terminal connects to an Arduino digital output pin, and the negative terminal connects to a GND (ground) pin on the Arduino.
3. **Controlling the Buzzer with Arduino:** Once connected, use the Arduino's digital output pin to control the buzzer. When want to issue a warning, you set the digital output pin to HIGH (logic level 1), which activates the buzzer and produces the sound. When to stop the warning sound, you set the digital output pin to LOW (logic level 0), which turns off the buzzer
4. **Coordinating with Elephant Detection:** To integrate the buzzer with the elephant detection part of the system, use the same code that activates the alarm and plays back the bee sounds. When the elephant is detected and reaches the border of the village, your code can trigger the buzzer to issue the warning 44 message in addition to the other deterrent measures.

By integrating the buzzer with the elephant detection and deterrent components, the system can issue a clear audible warning to the villagers when an elephant approaches the village border. This will help ensure the safety of the villagers and give them time to take necessary precautions and avoid potential conflicts with the elephant.

* **Machine Learning**

In here I needed to build the elephant Recognition Model. I used for roboflow technic develop the elephant recognition model (Object detection).Develop this Elephant detection model I used the YOLOv8 real-time object detection algorithm. YOLO is a popular real-time object detection algorithm known for its speed and accuracy.

1. **Collecting Elephant Images:** To train a machine learning model for elephant recognition, you need a dataset of images containing elephants. You collected approximately 200 images of elephants from various angles and poses, capturing different views of elephants to create a diverse dataset.
2. **Data Labeling with Roboflow:** Once you have the images, you need to label the instances of elephants in each image. This process involves drawing bounding boxes around the elephants to indicate their specific regions in the images. Roboflow is a platform that simplifies the data labeling process for computer vision tasks, including object detection. Using Roboflow, you labeled the elephant instances in the collected images, providing the necessary annotations for training the model.
3. **Object Detection Model:** Object detection algorithms are used for recognizing and localizing objects within an image. These algorithms can identify multiple objects of different classes and draw bounding boxes around them. You trained an object detection model using the labeled dataset of elephant images.
4. **Training the Model:** With the labeled dataset and the object detection model architecture chosen, you proceeded to train the machine learning model. During training, the model learns to recognize the visual patterns and features associated with elephants based on the labeled data. The goal is to enable the model to accurately detect and identify elephants in new, unseen images.
5. **Model Evaluation:** After training the model, you evaluated its performance on a separate dataset (validation set) to measure its accuracy and generalization capabilities. This step helps ensure that the model is not overfitting to the training data and can effectively recognize elephants in unseen images.
6. **Inference and Elephant Recognition:** Once the model is trained and evaluated, it is ready for inference, which involves using the model to recognize elephants in new images. When presented with a new image, the model processes it through its object detection algorithm, identifying and localizing elephants by drawing bounding boxes around them.

By going through this process, you have created a machine learning model that can accurately detect and recognize elephants in images. This model can be further deployed in real-world applications, such as the elephant recognition system you integrated with an ESP32 CAM module, allowing for early detection of elephants in vulnerable areas and contributing to human-elephant conflict mitigation efforts.

* **Google Cloud**&#x20;

I am using google cloud, many tasks can be done. This step involves leveraging Google Cloud services to store, process, and analyze the data collected by the system.

1. **Data Storage:** Google Cloud offers various storage options like Google Cloud Storage, which allows you to securely store the captured images and other relevant data from the system. By storing the data in the cloud, you ensure its availability, durability, and accessibility from anywhere at any time.
2. **Data Processing and Analysis:** Google Cloud provides powerful data processing and analysis tools such as Google Cloud Dataflow, Dataproc, or BigQuery. These services allow you to process and analyze the collected data at scale. For example, you can run machine learning algorithms on the data to gain insights into elephant behavior and movement patterns.

By leveraging Google Cloud services, you can maximize the potential of the data collected by the system, gain deeper insights into elephant behavior and interactions, and contribute to conservation efforts and the coexistence of elephants and human communities in vulnerable areas. The integration of cloud technology with your elephant recognition and deterrent system can significantly enhance its capabilities and impact.
