# Readme doc for PH502 practical 05, James Hennessy 14 October 26


## Purpose

- fibonacci.c asks user to enter a value n and prints fibonacci series up to that value
- arctanh.c calculates the value of arctanh(x) for x=-0.9 to 0.9, incrementing in steps of 0.01 using both a maclaurin series and using natural log method
- arctanh.c also compares the accuracy of the two methods
- More generally, this code introduces the concept and usage of pointers in C

## Contents
Files called fibonacci.c and arctanh.c which can be compiled using gcc.

## How to run

Compile the .c file, making sure to link the maths library with -lm, with the following cmd:

gcc fibonacci.c -o name_you_choose -lm

Then run the code using:

./name_you_choose


## Output

#### Part 1: fibonacci.c
- Outputs the fibonacci series up to a chosen value n

#### Part 2: arctanh.c
- Outputs the value of arctanh(x) for x=-0.9 to 0.9, incrementing in steps of 0.01
- Calculated using both a maclaurin series (user asked to input a value for delta, the precision)
- And calculated using natural log method
- Code prints the value of arctanh(x) and compares the difference between the 2 methods at each step
