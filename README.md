# Smart Industrial Safety and Environmental Monitoring System

## Overview

The **Smart Industrial Safety and Environmental Monitoring System** is an Arduino UNO-based mini project designed to improve industrial safety by continuously monitoring environmental conditions and potential hazards. The system integrates multiple sensors and actuators to detect gas leakage, temperature changes, human motion, light intensity, obstacle presence, and emergency situations. Real-time status and alerts are displayed on a 16x2 LCD display, while a buzzer and servo motor provide immediate responses during hazardous conditions.

## Objectives

* Enhance industrial safety through continuous environmental monitoring.
* Detect hazardous conditions and provide instant alerts.
* Improve workplace security and automation.
* Demonstrate the integration of multiple sensors with Arduino UNO.

## Features

* Gas leakage detection using an MQ gas sensor.
* Temperature monitoring using a temperature sensor.
* Human motion detection using a PIR sensor.
* Ambient light detection using an LDR sensor.
* Obstacle and vehicle detection using an ultrasonic sensor.
* Emergency gate or barrier control using a servo motor.
* Manual emergency control using a push button.
* Real-time status display on a 16x2 LCD.
* Audible warning through a buzzer during unsafe conditions.

## Components Used

* Arduino UNO
* MQ Series Gas Sensor
* Temperature Sensor
* PIR Motion Sensor
* LDR (Light Dependent Resistor)
* Ultrasonic Sensor (HC-SR04)
* Servo Motor
* Push Button
* 16x2 LCD Display
* Buzzer
* Breadboard
* Jumper Wires
* USB Cable

## Working Principle

The Arduino UNO continuously reads data from all connected sensors. The MQ gas sensor detects harmful gas leakage, while the temperature sensor monitors the surrounding temperature. The PIR sensor detects human movement, and the LDR measures ambient light intensity. The ultrasonic sensor measures the distance to nearby objects or vehicles. A push button is provided for manual emergency control, and the servo motor operates as an automatic gate or safety barrier when required.

Whenever any sensor detects an abnormal condition, the Arduino immediately activates the buzzer and updates the system status on the 16x2 LCD display. Depending on the detected event, the servo motor performs the required action, improving industrial safety and automation.

## Output

Include the following in this repository:

* Hardware setup photographs
* LCD display output
* Serial Monitor output (if used)
* Working demonstration images
* Project demonstration video (optional)

## Applications

* Industrial safety monitoring
* Manufacturing plants
* Chemical industries
* Warehouses
* Smart factories
* Environmental monitoring systems
* Automated safety and security systems

## Future Enhancements

* IoT-based remote monitoring using Wi-Fi
* Mobile application integration
* Cloud data logging
* SMS and email alert notifications
* Mobile dashboard for real-time monitoring
* AI-based predictive safety analysis

## Technologies Used

* Arduino UNO
* Arduino IDE
* Embedded C/C++
* Embedded Systems

## Author

**Swetha S**
