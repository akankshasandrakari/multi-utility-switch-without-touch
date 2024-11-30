# Multi-Utility Switch Without Touch

This project enables the control of multiple home appliances without physical contact, using sensors to detect user input. The system processes sensor data to toggle appliances on or off, providing an efficient and hygienic solution for smart home automation.

## Project Structure

- `main.c`: Contains the main control loop to initialize the system and check inputs.
- `utils.c`: Implements utility functions like input checking and appliance toggling.
- `utils.h`: Header file declaring utility functions.
- `README.md`: Project documentation.
- `other_files/`: Additional files (configuration, libraries, etc.).

## Features
- Controls appliances via sensor input (no physical touch needed).
- Hygienic and efficient for home automation.
- Can be extended to work with various types of sensors and appliances.

## Hardware Requirements
- Microcontroller (e.g., Arduino, Raspberry Pi, etc.).
- Sensors for detecting input (e.g., capacitive touch sensors or infrared sensors).
- Appliances or devices to control (e.g., lights, fans, etc.).
- Relay module (to control appliances).

## Software Requirements
- Embedded C compiler (e.g., GCC or other microcontroller-specific compilers).
- Platform-specific libraries for hardware access (GPIO, sensor interfacing, etc.).

## Installation and Setup

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/multi-utility-switch-without-touch.git
   cd multi-utility-switch-without-touch
