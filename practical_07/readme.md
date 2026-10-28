# Readme doc for PH502 practical 07, James Hennessy 28 October 26


## Purpose
- The general purpose of this practical is to introduce the use of dynamic arrays

#### Part 1:
- euler_number.c uses the below formula to estimate the value of e, with x = 1, whereby the user enters the order, 
and the program dynamically allocates an array of type double which stores each term separately
$f(x) = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + ...$

#### Part 2:
- dyn_arrays.c had 4 functions that:
  1. takes an integer as arg and returns pointer to a memory block of that many ints
  2. takes a pointer to array of ints and fills every cell with 1
  3. takes a pointer to array of ints and prints each cell
  4. frees allocated memory
- It also calls all these fns from a main block where user enters length of array of ints

## Contents
- One file called euler_number.c which can be compiled using gcc.
- One file called dyn_arrays.c which can be compiled using gcc.

## How to run

Compile the .c files with the following cmd:

gcc euler_number.c -o name_you_choose -lm

Then run the code using:

./name_you_choose


## Output
#### Part 1: 
- Prints the sum of terms up to a given order of polynomial (that the user has chosen)
- Prints the actual value for e
- Prints the diff between e and the approximated value
- Comment block at the end explains why estimate gets worse at higher order polynomial

#### Part 2:
- Prints a list of 1's, length determined by user input
