Automated Plant Watering System - Smart Irrigation

🌱 Description

An automated smart irrigation system designed to ensure optimal plant care and water conservation without manual intervention. It utilizes soil moisture sensors to monitor hydration levels in real-time. When moisture drops below predefined thresholds, the microcontroller automatically triggers a relay-controlled 5V water pump to hydrate the soil.

✨ Features

Real-time Monitoring: Continuously tracks soil hydration levels using analog sensors.

Automated Irrigation: Triggers a water pump automatically based on hard-coded moisture thresholds.

Water Conservation: Prevents over-watering by only activating when the soil is dry.

Hands-free Operation: Completely streamlines hardware interactions for low-maintenance plant care.

🛠️ Hardware Requirements

1x Microcontroller (Specify if Arduino Uno, Nano, NodeMCU, etc.)

1x Analog Soil Moisture Sensor (e.g., FC-28)

1x 5V Relay Module

1x 5V Mini Submersible Water Pump

PVC Tubing for the pump

Power Supply

Jumper Wires

🔌 Circuit / Wiring Diagram

(Note: Update these pins based on your exact wiring)

Component

Microcontroller Pin

Soil Sensor (Analog Out)

A0

Relay Module (IN)

Digital Pin 7

Relay / Sensor VCC

5V

Relay / Sensor GND

GND

Relay to Pump Wiring: Connect the Pump's positive wire to the relay's Normally Open (NO) terminal, and the power supply to the Common (COM) terminal.

📸 [Insert a photo of the system set up in a plant pot here]

💻 Software & Libraries

IDE: Arduino IDE

Language: C/C++

Required Libraries: None (Standard analogRead and digitalWrite)

🚀 How to Run

Clone this repository.

Open the .ino file in the Arduino IDE.

Calibration: You may need to test your soil sensor in dry and wet soil to find the correct threshold values. Update the threshold variable in the code accordingly.

Upload the code to your microcontroller.

Insert the sensor into the soil and place the water pump tube near the base of the plant.
