# 🐘 Evaluation & Results of system

Human–elephant conflict (HEC) is a severe and much-debated issue in Sri Lanka. Overall, this system combines IoT, Arduino, wireless communication, MIDI recording, and machine learning technologies to identify elephants, repel them using bee sounds, and reduce elephant-human conflict. This innovative approach allows for early detection and mitigation of conflict situations, promoting coexistence between humans and elephants in vulnerable areas. I have created a prototype here. My prototype created here is being tested in a lab.

* **Data Collection-** I am Gather a diverse set of labeled images of elephants and non-elephants (background images) to train and validate machine learning model.
* **Model Training-** i am Used the labeled dataset to train a machine learning model, such as a roboflow to recognize elephant shapes and characteristics. in here i used You can employ established deep learning frameworks such as roboflow and yolov8 for model training.
* **Integration Testing-** I am Integrate the trained machine learning model with the Arduino-compatible device equipped with the camera (ESP32 CAM module) and the necessary IoT and wireless communication components. Test the system's ability to capture images, process them using the machine learning model, and accurately detect the presence of elephants. the system responds appropriately activating the audible alarm and playing back bee sounds when an elephant is detected.
* **Performance and Reliability Testing:** I am Assess the system's performance and reliability under various scenarios. I am Test its ability to detect elephants accurately in different lighting conditions, distances, and angles. I Evaluate the system's response time; I am making sure it provides timely alerts and plays back bee sounds without significant delays.
* **User Experience Testing:** i Involved potential end-users or experts in the evaluation process to gather feedback on the system's usability, effectiveness, and practicality.

To provide a brief explanation of evaluating the system in the lab, we can create a table summarizing the success or failure of each step and the results of the evaluation.



| Evaluation Step             | Success/Fail  | Results                                                 |
| --------------------------- | ------------- | ------------------------------------------------------- |
| Data Collection             | Success       | Diverse dataset with labeled images of elephants        |
| Model Training              | Success       | Trained roboflow model with good performance metrics    |
| Model Evaluation            | Success       | High accuracy, precision, recall, and F1-score          |
| Integration Testing         | Success       | System accurately detects elephants and activates alarm |
| Performance and Reliability | Success       | System performs well under various conditions           |
| User Experience Testing     | Success       | Positive feedback on usability and effectiveness        |

