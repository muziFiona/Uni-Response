# Week 4 - Project Proposal

[Link for the proposal](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/Project_Proposal_fortune_telling.pdf "Proposal link")

# Week 5 - LOG for Project 

Last week I have presented my Project Proposal to the class about a "Fortune Telling Machine" which was approved afterwards.

Here I am going show a more detail design about this machine (more concept drawings and how it works).

## The Wheel of RUNES
![Concept image](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Week_5/media/The_wheel_01.jpg)

A wheel will be split into 26 parts, 25 for runes, and one for starting point, everytime it ends the pointer will return to the centre point instead of any other rune places

## Design for the Machine

[![Concept image](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Week_5/media/The_wheel_02.jpg)](https://youtu.be/sWQf0j5OthM)

[Input]Potentiometer for adjusting mode for user (mode 1, mode 2 and mode 3)

[Input]Button for start the game

[Input]Phototransistor could be use for making the rotation stop, when the user put the hand in front of the centre, the pointer will stop and show the final result on screen with lighting on the selected Rune.

[Output]Motor for spining the pointer, (spin randomly to generate 1 of the 25 result)

[Output]LEDs, when the spin ends, the LED will lights up where the pointer stop

[Output]Screen under the wheel, where to show the users the result, and the meaning, also presenting instruction of how to play it.

## Week 6

I have order parts from online and waiting to be delivered. 

Parts such as the screen, motor, photoresistor and potentitometer. 

## Week 7

ORDERS arrived!!
TFT screen, long bradboard, LEDs, more wire, the servo motor, 6 shift registors, potentitometer and light resistor. 

![Orders arrived](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Components_1.jpg)
![Components arrived](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Components_2.jpg)

I am looking for more tutorial on how to control shift registor in terms of coneecting more than 2. And how can they control singal element instead of making them as a whole. 

Examples I have found:
https://create.arduino.cc/projecthub/Heathen_Hacks-v2/3-pins-32-leds-4-shift-registers-74hc595-834b66

This work from 'HeathenHacks' shows a performance using 4 shit registor (32 LEds in total) and form a light wave. 

Here below is the outcome I tried:
[![Runes](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Shift_reg_1.jpg)](https://youtu.be/rRugZeb03pg)


### TFT Screen Tryout

![TFT screen](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/TFT_Screen.jpg)
Some horrible thing happened when I tried to wire the board refer to the adafruit tutorial and it accidentally turn off my laptop.....
The tutorial below
https://learn.adafruit.com/2-2-tft-display

[![adafruit tutorial](https://cdn-learn.adafruit.com/assets/assets/000/049/587/large1024/arduino_compatibles_uno_bb.png?1513982526)](https://learn.adafruit.com/2-2-tft-display/arduino-wiring)


My laptop just gone black for minutes (you cannot even turn it on). The power button works few minute after. 

I was not able to make the screen on, not sure if it's because of the soldering problem or power problem or circuit problem. I will need to figure it out or think of the other options for screening (ex. using phone or ipad as screen).

## Week 8

### Laser Cutting Induction (21/11/2019)

This week we have the laser cutting induction so I want to focus on the outlook design and have it done by next week.

We are tought how to create files on Adobe Illustrator for the laser cutting, having knowledge about size, dimensions, and gap for pieces, etc. (Generally learn the rules for preparing, and how to achieve on actual machine)

### The cutting Process

(click image to the video)
[![Laser Cutting](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Laser_Cutting.jpg)](https://youtu.be/PzTp2HzhzW8)

At first, I want to create a Maya model first and transfer into flat image (using the mapping function), but that could take much more time to really fully create an accurate model with the right scale (as there is no measuring tool in Maya and it would be wasting time to get start with another new software at this point (could have a look at Fushion 360 after), and I decided to draw directly on AI after the induction (have found the material in UAL shop, the wood board 3mm thick). 

Here's the 3D model for inital design:
![Maya](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Maya_model.jpg)
The AI graphic:
![AI](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/AI_Design_01.jpg)

============!
### The TFT screen finally work!!
I resolder all the plot and try the Arduino example, it finally works!
So the previous problem might consider as "didn't solder properly", I reconsider this probability after the Week 8 lesson (solder the Adafruit nRF52840) which I learnt the correct method about soldering. 

The TFT test from Arduino library:
![TFT test](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/TFT_Arduino_test_1.gif)

[TFT wiring tutorial](https://learn.adafruit.com/2-2-tft-display/arduino-wiring)

## Week 9

### Laser Cutting

![Laser Cutting](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Laser_cutting_RUNES-board.jpg)

![Laser Cutting](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Laser_cutting_RUNES-box.jpg)
I brought all materials from UAL shop, plywood. Here comes to a problem, I saw a MDF sheet (3mm thick) inside the shop which would be prefect for laser cutting with its size and price, however, there's a sign on top saying it is not suitable for the Laser Cutting of this university. So I need to go back to my set Ai file and change the size of the file. 

The effect on wood look just as I want, the burn mark on the wood makes the pattern looks more mystery. 

There were some problem during the laser cutting, as I need to engrave the RUNES pattern on top the wheel shape, which I need to save the pattern seperately as an image file and print together. However, when the staff there try to help me sending the file to the machine, errors always happen due to the image file. That took a while to figure but failed. Finally we printed the pattern seperately on the board first and hold its position to cut out the shapes. And the result looks really nice. 

[![Laser Cutting](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Final_Project/media/Laser_cutting_Moment.jpg)](https://youtu.be/yKnb4aUxnGA)

Most of the holes fit my components well, just the bit that use to connect the box and the wheel together was sliently unstable, which I would like to reprint that parts next week. As well as printing out some spare parts in case some not works. 


## RUNES

There are 24 runes in total but 25 for fortune telling, the 25th one is blank and representing Karma (what you have done is the result you get)

![Runes](https://github.com/muziFiona/Uni-Response/blob/master/Advanced-Physical-Computing/Week_5/media/b3ef9d0df795c0f86c6c80f16d25af84.jpg)
 