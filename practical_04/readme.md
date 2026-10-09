# Readme doc for PH502 practical 04, James Hennessy 09 October 26


## Purpose

- prac4.c is c code that uses prints the tan of angles in degrees ranging from 0 to 60, increasing in increments of 5 degrees
- it also uses these calculated tan values to determine area under a curve using trapezoidal rule
- code introduces the use of functions in the PH502 course

## Contents
Files called prac4.c which can be compiled using gcc.

## How to run

Compile the .c file, making sure to link the maths library with -lm, with the following cmd:

gcc prac4.c -o name_you_choose -lm

Then run the code using:

./name_you_choose


## Output

- Prints out a list of tan(x) = where x = 0, 5, 10, .....60
- Prints out area under curve using trapezoidal rule
