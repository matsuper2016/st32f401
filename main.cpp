/* Copyright (c) 2017 STMicroelectronics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************
*            RAPID PROTOTYPING WITH NUCLEO          *
* Example Code 00: Blink Led                        *
* Author: Mauro D'Angelo                            *
* Organization: STMicroelectronics					*
*****************************************************/

#include "mbed.h"

// It creates an instance of the DigitalOut class.
// myled is the name of the variable (instance).
// The instance shall 'point' to the pin LED1, that is the led on the board
DigitalOut myled(LED1);

// Entry point
int main() {
    // Led blinking - The led is switched on and off
    while(1) {
        myled = 1; // The LED is ON
        wait(0.2); // Stop the program counter here and wait for 200 ms. In the meanwhile the led is on
        myled = 0; // Switch-off the LED
        wait(1.0); // Stop the program counter here and wait for 1 ms. In the meanwhile the led is off
    }
}

// EXERCISE: Modify the interval between the led status changing instructions
