# Readme doc for PH502 practical 09, James Hennessy 10 Nov 26


## Purpose
- Week 9 covered algorithm design, data structures and the standard library, incl. reading and
  writing files. 
- practical_09 reads a square matrix in from a file and checks whether it is a
  magic square, i.e. every row, column and both main diagonals sum to the same value M = n(n^2+1)/2.

#### Part 1:
- magic_square.h contains the function isMagicSquare, which checks every row, column and both
  diagonals of an n x n matrix sum to M. Returns 1 if magic, 0 if not.

#### Part 2:
- main.c asks user for a file name, gets the size n by counting the lines in the file, then
  dynamically allocates an n x n matrix (an array of pointers, one per row) and reads the integers in.
- Calls isMagicSquare and prints the result, then frees the memory and closes the file.

## Contents
- main.c, the main programme, which can be compiled using gcc.
- magic_square.h, header file containing isMagicSquare, included by main.c.
- magic_square.txt is a 3x3 magic square for testing.
- not_magic_square.txt is  a 3x3 non-magic square for testing.

## How to run

Compile with the following cmd:

```gcc main.c -o name_you_choose -Wall```

Then run the code using:

./name_you_choose

and enter the file name when prompted, e.g. magic_square.txt

## Output
- Prints the number of lines in the file, then whether or not the square is magic
- E.g. magic_square.txt --> Square is magic
- E.g. not_magic_square.txt --> Square not magic
