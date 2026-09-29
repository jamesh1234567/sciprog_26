#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare  and initialise variables */
   int N=12; //Number of points
   float a=0.0; //start
   float b=M_PI/3.0; //end 
   float sum1 = 0.0;
   float sum2 = 0.0;
   float result=0.0;
   float log_2=logf(2); // For comparison
   float inc = ((b-a)/N); // Step size
/* Calculate sum1 */
   sum1 = tan(a) + tan(b);

/* Loop over 11 equidistant pts adding 2tan(xi) each time */

   for(int i=1; i<N; i++){
	sum2 += 2*tan(a + i*inc);
   }

/* add sum1 and sum2 and multiply by (b-a)/2N */

   result = ((b-a)/(2.0*N))*(sum1 + sum2);


   printf("Integral evaulates to %f\n", result);


   printf("For comparison, log(2) = %f\n", log_2);

   return 0;
}
