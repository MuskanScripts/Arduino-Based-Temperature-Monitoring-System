# Arduino-Based Temperature Monitoring System

## Overview
This project uses an Arduino Uno and a DHT11 temperature and humidity sensor to monitor ambient temperature in real-time. The system displays temperature readings on the serial monitor and triggers an LED alert if the temperature exceeds a set threshold.

## Features
- Reads temperature from DHT11 sensor.
- Displays temperature on Arduino serial monitor.
- Turns on onboard LED when temperature exceeds 30°C.
- Simple embedded C code using Arduino IDE.

## Hardware Required
- Arduino Uno
- DHT11 Temperature and Humidity Sensor
- Jumper wires
- (Optional) Breadboard

## Wiring
- DHT11:
  - VCC to 5V on Arduino
  - GND to GND on Arduino
  - Data pin to Digital Pin 2 on Arduino
- LED:
  - Use built-in LED on pin 13 (no extra wiring needed)

## Usage

1. Open Arduino IDE and install the `DHT sensor library` by Adafruit (via Library Manager).
2. Upload `temp_monitor.ino` sketch to the Arduino board.
3. Open Serial Monitor at 9600 baud to view temperature readings.
4. Observe onboard LED turning on when temperature exceeds 30°C.

## Learning Outcomes
- Interfacing sensors with Arduino.
- Embedded C programming and Arduino IDE basics.
- Working with GPIO pins and digital output.
- Real-time sensor data acquisition and simple alert system.
