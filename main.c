#include "utils.h"

int main() {
    // Initialize switch system and hardware peripherals
    initSwitch();

    // Main control loop
    while(1) {
        if (checkInput()) {  // Check if input is detected (sensor/button press)
            toggleAppliance();  // Toggle the appliance (on/off)
        }
    }
    
    return 0;
}
