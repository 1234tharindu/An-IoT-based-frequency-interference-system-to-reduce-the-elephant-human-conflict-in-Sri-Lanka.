# 🐘 Presentation of Results

_**Detect elephant of the system**_

To develop the Elephant Recognition Model, the Roboflow technique was employed. Roboflow is a platform that provides tools and resources for training computer vision models. It facilitates the process of data preprocessing, augmentation, and model training.

* Collecting Elephant Images
* Data Labeling with Roboflow
* Object Detection Model
* Training the Model

Inference and Elephant Recognition – Inference and Elephant Recognition - Once the model is trained and evaluated, it is ready for inference, which involves using the model to recognize elephants in new images. When presented with a new image, the model processes it through its object detection algorithm, identifying and localizing elephants by drawing bounding boxes around them.

<figure><img src="../../.gitbook/assets/Screenshot 2024-09-13 145921.png" alt=""><figcaption><p>Presentation of Results of identify object</p></figcaption></figure>



<figure><img src="../../.gitbook/assets/456.png" alt=""><figcaption><p>identify the elephant</p></figcaption></figure>

_**Release the bee sound**_

After identifying the elephant, driving away the elephant is the second part of this. I will use the voice of the bee for that. In particular, I will use a speaker for that. Here the speaker will be connected to the arduino board. There I will use a 3.5v type speaker. A BD139 transistor is used for the speaker.



<figure><img src="../../.gitbook/assets/Screenshot 2024-09-13 150356.png" alt=""><figcaption><p>Release bee sound phototype</p></figcaption></figure>

_**Notify the user**_

In addition to the audible alarm and bee sound playback, the system also employs a SIM900 GSM module for wireless communication. This module enables the system to send messages or notifications to the local residents, informing them of the elephant's entry into the danger zone. The system can be programmed to automatically send a message with relevant information, such as the location and time of the elephant sighting, to the residents' mobile phones.

By combining the alarm activation, bee sound playback, and SIM900 GSM module integration, your system ensures that the local residents are promptly alerted when an elephant enters the danger zone. This immediate notification allows them to take necessary precautions and avoid potential accidents or conflicts with the elephant.
