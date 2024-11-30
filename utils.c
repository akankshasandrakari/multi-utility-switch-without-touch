#include "utils.h"
#include <stdio.h>  // Include for I/O functions

// Function to initialize the switch system and hardware
void initSwitch() {
    // Set up GPIO pins or communication for sensors and appliances
    printf("Switch system initialized\n");
    // Assume we are setting pins for controlling a relay or appliance
    // Example: pinMode(SWITCH_PIN, INPUT);
    // pinMode(APPLIANCE_PIN, OUTPUT);
}

// Function to check if there is any input from the sensor or button
int checkInput() {
    // Simulate checking a sensor or button state
    // For a real system, this would interact with hardware, e.g., using digitalRead()
    static int inputState = 0;  // Toggle between 0 and 1 for simulation

    inputState = !inputState;  // Toggle input state
    if (inputState == 1) {
        return 1;  // Input detected (e.g., user interaction with the system)
    } else {
        return 0;  // No input detected
    }
}

// Function to toggle the appliance based on input
void toggleAppliance() {
    static int applianceState = 0;  // 0 for off, 1 for on
    
    if (applianceState == 0) {
        applianceState = 1;
        printf("Appliance is ON\n");
        // For a real system, here you would interact with hardware to turn on an appliance
        // Example: digitalWrite(APPLIANCE_PIN, HIGH);
    } else {
        applianceState = 0;
        printf("Appliance is OFF\n");
        // For a real system, here you would interact with hardware to turn off an appliance
        // Example: digitalWrite(APPLIANCE_PIN, LOW);
    }
}
