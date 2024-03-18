# Toggling LEDs & Automatic Plant Watering System Using 8051 Microcontrollers

This repository contains the code and documentation for two projects:

1. Toggling LEDs using an 8051 microcontroller
2. Automatic plant watering system using an 8051 microcontroller

## Project 1: Toggling LEDs

### Overview

This project demonstrates how to interface LEDs with an 8051 microcontroller (AT89C52) and toggle them on and off. The main components used are:

- AT89C52 microcontroller
- 8 LEDs
- Resistors
- Breadboard
- Connecting wires

### Working Principle

The microcontroller is programmed using Embedded C language to control the state of the LEDs connected to its output pins. By toggling the pins between logic high and low states, the LEDs can be turned on and off in a specific pattern.

### Applications

LEDs have numerous applications, including:

- Seven-segment displays
- Dot matrix displays
- Street lights
- Indicators
- Traffic lights
- Emergency lights
- Electronic designs

## Project 2: Automatic Plant Watering System

### Overview

This project implements an automatic plant watering system using an 8051 microcontroller (AT89C52). The system monitors the moisture level in the soil and automatically turns on a water pump when the soil becomes dry. The main components used are:

- AT89C52 microcontroller
- Moisture sensor
- Relay
- Water pump
- LEDs
- Buzzer

### Working Principle

The moisture sensor is connected to the microcontroller, which reads the moisture level in the soil. When the soil becomes dry, the microcontroller activates a relay to turn on the water pump. The system also includes LEDs and a buzzer to indicate the water level and provide visual and audible feedback.

### Applications

Automatic plant watering systems are beneficial in various scenarios, such as:

- Gardening and agriculture
- Landscaping and lawn maintenance
- Greenhouses and nurseries
- Residential and commercial buildings

## Setup and Installation

1. Clone the repository: `git clone https://github.com/SmartPlantWatering8051.git`
2. Install the required software (Keil μVision, Proteus VSM, and microcontroller programming software)
3. Open the project files in the respective software and compile/simulate the code.
4. Program the microcontroller with the compiled hex file.
5. Connect the necessary components as per the circuit diagrams provided in the PDF.
6. Power on the circuit, and the respective project should work as intended.

## Contributions

Contributions to this repository are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
