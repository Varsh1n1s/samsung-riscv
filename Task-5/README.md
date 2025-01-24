# TASK-5: Simple Calculator 

## Circuit Diagram:
<img width="733" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/a6e28ff6-7843-442c-a239-3d13d5e4e42b" />

## Introduction:

The *Simple Calculator* Project performs basic arithmetic operations such as addition, subtraction, multiplication, and division using hardware logic. It is designed to take inputs, process the selected operation, and display the result efficiently.
This project demonstrates the practical implementation of digital design concepts, focusing on modularity, logic development, and efficient computation. It provides a foundational understanding of arithmetic operations in digital circuits.

## Overview:

The Simple Calculator Project is designed to perform basic arithmetic operations—addition, subtraction, multiplication, and division—using hardware logic. It allows the user to input numbers and select operations through a 4x4 keypad, and the results are displayed on an LCD display.
Key Features of the Calculator:
1. Arithmetic Operations:
- Addition
- Subtraction
- Multiplication
- Division
2. Input Method: 4x4 Keypad: Used for entering numbers and selecting operations.
3. Output Display: LCD Display: Shows the results of the arithmetic operations.
4. Control Logic: A control unit processes the input from the keypad, performs the selected arithmetic operation, and drives the LCD to display the result.

## Components Required:

1.	VSD Squadron Mini
2.	4x4 Matrix Keyboard
3.	LCD Display(I2C)
4.	Jumper Wire

## Pin Connections:
1. LCD Display(I2C):

| **PIN on LCD** | **PIN on Board** |
|----------------|------------------|
| GND           | GND              |
| VCC           | 5V               |
| SDA           | PC1              |
| SCL           | PC2              |


2. 4x4 Matrix Keypad:

| **Pin** | **Connection** |
|---------|----------------|
| Pin 1   | PD0            |
| Pin 2   | PD1            |
| Pin 3   | PD2            |
| Pin 4   | PD3            |
| Pin 5   | PD4            |
| Pin 6   | PD5            |
| Pin 7   | PD6            |
| Pin 8   | PD7            |
