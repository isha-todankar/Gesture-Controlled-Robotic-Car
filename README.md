# Arduino Based Gesture Controlled Robot Using Radio Module

A wireless hand gesture-controlled robot using Arduino technology and RF communication. The system enables intuitive robot control through hand motions for industrial, home, and accessibility applications.

## Project Overview

This project demonstrates the design and development of a robot controlled by hand gestures captured via an MPU6050 accelerometer sensor. The sensor data is processed by an Arduino Nano microcontroller and wirelessly transmitted using an NRF24L01 RF module to a robot receiver. The robot moves in response to gestures such as forward, backward, left, right, and stop, controlled by driving four DC motors through a motor driver.

## Motivation and Problem Statement

The system aims to provide an intuitive interface for controlling robots using natural hand movements rather than traditional inputs like buttons or joysticks. This control method can enhance mobility for individuals with disabilities and improve safety in hazardous environments by enabling remote operation.

## System Architecture

- **Transmitter Unit:** Arduino Nano, MPU6050 accelerometer sensor, NRF24L01 RF module worn by the user on the hand.
- **Receiver Unit:** Arduino Nano, NRF24L01 RF module, motor driver, four DC motors to drive the robot.
- Continuous transmission of processed hand gesture data enables real-time robot maneuvering.

## Features

- Wireless control via RF communication.
- Gesture recognition for intuitive operation.
- Mobility improvement and hands-free control.
- Potential applications in industrial automation and assistance for disabled users.

## Hardware Requirements

- Arduino Nano microcontrollers (transmitter and receiver).
- MPU6050 3-axis accelerometer sensor.
- NRF24L01 radio frequency modules (transmit and receive).
- Motor driver IC and four DC motors.
- Power supply (battery and switch).

## Software Requirements

- Arduino IDE for firmware programming.
- Libraries for MPU6050 sensor and NRF24L01 RF module.

## Setup Instructions

1. Assemble transmitter with Arduino Nano, MPU6050 sensor, and NRF24L01 module.
2. Assemble receiver with Arduino Nano, motor driver, motors, and NRF24L01 module.
3. Program both microcontrollers using Arduino IDE with gesture detection and control logic.
4. Test communication range and reliability.
5. Calibrate gesture recognition for accurate control.

## Advantages

- Wireless communication enhances mobility and safety.
- Hands-free robot movement control simplifies operation.
- Reduces wear on physical components by eliminating cables.

## Disadvantages

- Possible signal interference or loss in environment with obstacles.
- Reliance on battery power for wireless operation.
- Security considerations for wireless data transmission.

