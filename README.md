# Wall-E Arduino Robot

This Arduino code controls the fully autonomous Wall-E robot, utilizing ultrasonic sensors for distance measurement, DC motors for motion and servo motors for scoop movement. The code includes functionality to perform various movements and react to objects detected by the sensors.

## TinkerCAD Circuit

You can find the TinkerCAD circuit for Wall-E [here](https://www.tinkercad.com/things/hlpbCUQ0bUz-wall-e-circuit/editel). It provides a visual representation of the circuit connections and components used in the code.

## Description

The Wall-E robot code utilizes the following components:

- Arduino board: Acts as the main control unit for the robot.
- Servo motors: Controls the movement of the robot's scoop.
- Ultrasonic sensor: Measures the distance between the robot and objects in its vicinity.
- LEDs: Used to indicate the presence of nearby objects.
- DC motors: Utilized for motion of robot.

The code initializes the necessary pins and servo objects. It then performs a sequence of movements to demonstrate the capabilities of the robot, including forward, backward, left turn, right turn, and stop. Additionally, the code utilizes the ultrasonic sensor to detect nearby objects and blink an LED when an object is within a specific range.

## Components

To recreate the Wall-E robot, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- Servo motors (2x)
- DC motors (2x)
- Ultrasonic sensor (HC-SR04)
- LEDs (4x)
- Resistors (as required)
- Jumper wires
- Breadboard

## Setup
Please refer to the PDF version of the design document for more details.

## Usage

Upon running the code on the Arduino board, the Wall-E robot will perform a predefined sequence of movements, including forward, backward, left turn, right turn, and stop. The ultrasonic sensor will continuously measure the distance to nearby objects and blink an LED on the Arduino board when an object is detected within a specific range.

## Acknowledgements

This project was built as part of ECE 198 at UWaterloo.
