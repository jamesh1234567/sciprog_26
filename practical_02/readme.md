# Readme doc for PH502 practical 02, James Hennessy 06 October 26

## Important Note
This code was pushed a week or so late (i.e. after the zoom on 06 October) because initially I thought only pracical_03 onwards had to be added to the github
This was corrected in the zoom call so practical_02 code is being pushed now.

## Purpose

Part 1: Conversion.c
- Conversion.c counts how many binary digits there are in a number

Part2: Sum.c
- Sum.c calculates the sum of 1/n from 1 tp 1000, starting at either 1 or 1000 and notes the difference between calculating the sum eiter way

## Contents
Files called Conversion.c and Sum.c which can be compiled using gcc.

## How to run

Compile the .c file, making sure to link the maths library with -lm, with the following cmd:

gcc Sum.c -o sum -lm

Then run the code using:

./sum

Repleace Sum with Conversion to compile/run the other .c file.
## Output

Conversion.c:
- Prints the given integer
- Prints the given integer as a float
- Prints the given integer as a binary number

Sum.c
- Prints both sums (starting from 1 or 1000)
- Prints the difference between the 2 sums
