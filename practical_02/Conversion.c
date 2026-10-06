#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];


/* Intialise 4-byte integer */
   inum = 6;//33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0'; 
       
   //reverse the String binnum
   int length, mid, j;
   char aux;
   length = strlen(binnum);
   mid = length/2;
   for(i = 0; i < mid; i++) {
       j = length-i-1;
       aux = binnum[i];
       binnum[i] = binnum[j];
       binnum[j] = aux;
    }

/* TODO: Complete the expression */
   numdigits = ceil(logf(fnum)/logf(2));
   printf("The number of digits is %d\n",numdigits);

   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

   return 0;
}
/*
Q1. Compiled and ran with 6 and 33554431, 6 prints fine but other as 33554432

Q2. Floating point version becomes 33554432

Q3. 33554431 = 2^25 -1, so 25 binary digits, float only holds 24, so can't store the number and rounds to nearest value it can store

Q4. See above

*/
