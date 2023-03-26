MSP430 LED Blinking Project
This project demonstrates how to control a red LED (LED1) on the MSP430 development board to blink using C programming language.

Prerequisites
MSP430 development board
Code Composer Studio (CCS) or MSP430 GCC toolchain
USB cable for power and programming the board
Getting Started
Clone the repository to your local machine using the command: git clone https://github.com/your-username/msp430-led-blink.git
Connect the MSP430 development board to your computer using the USB cable.
Open Code Composer Studio or your preferred IDE and import the project.
Build the project and make sure there are no errors.
Load the compiled code onto the board using your IDE's programming tool or an external programmer.
The LED should start blinking at a frequency of 1 Hz.
Project Structure
The project consists of the following files:

main.c: contains the main program logic to control the LED.
msp430g2553.h: header file for MSP430G2553 microcontroller.
Makefile: makefile to build the project using the MSP430 GCC toolchain.
Modifying the Code
To modify the blinking frequency, change the value of the delay variable in main.c. The delay value is in milliseconds, so a value of 1000 would correspond to a frequency of 1 Hz.

Troubleshooting
If the LED is not blinking, check the connections between the MSP430 board and your computer.
Make sure the board is properly powered.
Double-check the programming settings in your IDE and ensure that the compiled code is loaded onto the board.
