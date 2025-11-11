# ESP32 MQTT Communication

This repository contains the implementation of wireless communication between two ESP32 IoT devices using the MQTT protocol, as part of Assignment 8 (completed on November 4, 2025).

## Objective
Demonstrate wireless communication where one ESP32 acts as a publisher sending messages, and the other acts as a subscriber receiving those messages via a public MQTT broker.

## Materials Used
- 2 x ESP32 development boards
- USB cables (for each ESP32)
- Computer with Arduino IDE installed
- Wi-Fi access point (SSID and password)
- MQTT broker (e.g., broker.hivemq.com)
- PubSubClient Arduino library

## Theory
MQTT (Message Queuing Telemetry Transport) is a lightweight, publish/subscribe protocol widely used in IoT for reliable device-to-device communication. A publisher sends messages to a specific topic on an MQTT broker, and subscribers receive those messages by listening to the same topic.

## Code
- `publisher.ino`: ESP32 Publisher code.
- `subscriber.ino`: ESP32 Subscriber code.

## Setup Images
Check the `setup_images/` folder for visual setup details.

## Output Images
Check the `output_images/` folder for Serial Monitor outputs.

## Instructions
1. Install the ESP32 board package and PubSubClient library in Arduino IDE.
2. Connect both ESP32s to the same Wi-Fi network.
3. Upload `publisher.ino` to Device A and `subscriber.ino` to Device B.
4. Open Serial Monitor (115200 baud) to see the communication.

## Conclusion
This experiment successfully demonstrated MQTT-based wireless IoT communication, showcasing its efficiency for real-time applications.

Author: Sumera Sameer Shaikh (Roll No. B_76)
