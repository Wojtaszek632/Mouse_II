# 🐭 Mouse_II - Bluetooth controled robot
Simple Bluetooth controled robot, based on arduino and HC-06 Bluetooth module.

## Table of contents
* [General info](#general-info)
* [Screenshots](#screenshots)
* [Technologies](#technologies)
* [Parts needed](#Parts)
* [Setup](#setup)
* [Features](#features)
* [Status](#status)
* [Inspiration](#inspiration)
* [Contact](#contact)

## General info
Second version of my robot that I made during highschool. It is controlled by [Arduino nano](https://store.arduino.cc/arduino-nano) board and Android app pared with [HC-06 Bluetooth module](https://components101.com/wireless/hc-06-bluetooth-module-pinout-datasheet). It usues the [L293D](https://www.amazon.com/NDRTJM-MSTL2930-L293D-Stepper-Driver/dp/B008XCGLNM) push-pull driver to controll 2 Brushed DC electric motors. The robot is controlled by user through an android app.

## Screenshots
Screenschots shows early version with Arduino Uno as a brain, but it was later replaced by Arduino Nano, mainly beceasue of it's small form factor.
![Example screenshot](https://i.imgur.com/mzvWkJb.png)
![Example screenshot](https://i.imgur.com/izCy31c.png)
Current version with Arduino Nano on board:
![Example screenshot](https://i.imgur.com/l0q83EO.jpg)
![Example screenshot](https://i.imgur.com/oRN1kOy.jpg)

## Technologies
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
*  Bluetooth 2.0
* [Android App Inventor](http://ai2.appinventor.mit.edu/)
![Example screenshot](https://i.imgur.com/bQvfyiW.png)
![Example screenshot](https://i.imgur.com/Ar6vnJC.png) 
## Parts needed
* Arduino nano
* L293D push-pull 2 channel motor driver
* HC-06 Bluetooth module
* Breadboard
* Breadboard jumper wires
* 2WD Robot Car Chassis
* Battery pack or other energy source. (I use 2x 9V batteries, one to power Arduino, Bluetooth module, and logic of the L293D, and the other one to power the motors)

## Setup
Upload MARK_II.ino to your arduino and connect components as shown below (bear in mind that the HC-06 operates on 3.3V logic. Arduino can recive data from it, but transmiting data with 5V Arduino's logic requires additional 1k ohm resistor between Arduino RXD and HC-06 TXD):
![Schematic](https://i.imgur.com/PmfjSp2.png)
Connect with the HC-06 module with your's phone (connect to it like any external Bluetooth device e.g. Bluetooth speaker)
From the P.D.R. I, app select the HC-06 module.
That's it! You can now controll the robot.



## Features
Driving forward and reverse in any direction, turning right and left.

## Status
Finished, this exact setup is used in Mouse_III, but the android app is replaced by Desktop C++ program.

## Inspiration
Youtube tutorial on how to use the App inventor.

## Contact
Created by Wojciech Mańczak - feel free to contact me!
