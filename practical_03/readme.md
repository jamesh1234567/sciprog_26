# Readme doc for PH502 practical 03, James Hennessy 29 Sept 26

## Purpose

This c code computes the integral of tan(x) from 0 to pi/3 using the trapezium rule with N=12 (i.e. 11 interior pts) using a for loop

The .c file also prints the value of log(2) for comparison

## Contents
A file called Area.c which can be compiled using gcc and will print the result of the integration and the numerical value of log(2)

## How to run

Compile the .c file, making sure to link the maths library with -lm, with the following cmd:

gcc Area.c -o area -lm

Then run the code using:

./area

## Output

Prints estimated value of integral and the value of log(2)
