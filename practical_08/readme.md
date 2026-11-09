# Readme doc for PH502 practical 08, James Hennessy 09 Nov 26


## Purpose
- Week 8 covered algorithms, time complexity and classification. This practical introduces 
  the use of an algorithm to find the greatest common divisor (GCD) of two integers, using either
  an iterative or a recursive function.

#### Part 1:
- euclid_iterative.c uses an iterative function to find the GCD of two integers using the euclidian algorithm
- User inputs 2 non-zero integers, programme prints the GCD

#### Part 2:
- euclid_recursive.c uses a recursive function to find the GCD of 2 integers using the euclidian algorithm
- User inputs 2 non-zero integers, programme prints the GCD.

## Contents
- One file called euclid_iterative.c which can be compiled using gcc.
- One file called euclid_recursive.c which can be compiled using gcc.

## How to run

Compile the .c files with the following cmd:

Part 1: ```gcc euclid_iterative.c -o name_you_choose```

Part 2: ```gcc euclid_recursive.c -o name_you_choose```

Then run the code using:

./name_you_choose


## Output
#### Part 1: 
- Prints the GCD of the 2 integers the user inputs, using an iterative function
- E.g. 8 12 --> GCD: 4

#### Part 2:
- Prints the GCD of the 2 integers the user inputs, using a recursive function
