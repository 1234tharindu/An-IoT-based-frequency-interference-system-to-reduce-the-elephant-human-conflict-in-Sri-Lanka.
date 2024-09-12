# 🍀 Elephant Detection and classifying

This study's main goal is to lessen friction between people and elephants in the forest's fringe sections. Elephant identification is greatly aided by Convolutional Neural Networks (CNN), which facilitate effective image classification. The most accurate model, using CNN training, has a 92% accuracy rate. Additionally, the findings may be helpful for bioacoustics researchers who wish to analyze recordings of wildlife.

Here, we gathered a variety of creatures, including elephants, deer, bears, buffalo, hens, cats, and more. Data is collected and then separated into two folders: training data set and testing data set. We divide each image (800 x 600 pixels in size) into equal parts. We employ the data augmentation technique to get a high degree of accuracy. We construct the CNN model and divide the data set in accordance with the 70:30 ratio using Python and the Visual Code IDE. 30 percent for the testing data set and 70 percent for the training data set.



<figure><img src="../../../.gitbook/assets/images (1).jfif" alt=""><figcaption><p>Layered architecture</p></figcaption></figure>

The CNN model was subsequently created using a variety of layers and training data. According to volumetric dimensions like height, width, and depth, the CNN neurons are arranged. Convolutional, pooling, and totally linked layers make up the CNN architecture, for example. It is typical to alternate between the standard layer and the pooling layer, with each filter's depth increasing from left to right and the output size (height and width) decreasing.

In order to train a CNN model and get some decent precision, we must gather as many photos as we can in the allotted period. We acquired images of the necessary courses, on which we built a CNN model. The programming was carried out with Keras, a 34 Python back-end library that makes use of Tensor-flow. Following data collection, we divide the training data into batches, and we use the CNN algorithm to optimize the loss function.



<figure><img src="../../../.gitbook/assets/download (9).jfif" alt=""><figcaption><p>Sample images of elephants used for training</p></figcaption></figure>

After training on the data set photos using the training algorithm, other animal images are given to the testing algorithm to verify the algorithm's functionality. The findings demonstrate that every animal is correctly identified, and the proportion of right identifications for each animal image is displayed. Each result shows the number of pixels matched by the segmented data set images used for the training method, and the data set represents the number of segmented image objects.



<figure><img src="../../../.gitbook/assets/download (8).jfif" alt=""><figcaption><p>Result of the object detection.</p></figcaption></figure>

