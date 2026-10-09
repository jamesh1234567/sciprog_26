#include <stdio.h>
#include <math.h>

/* global array from tan values*/
float result [13];
float pi;

float degtorad(float arg);
float area(void);

int main(void){
    int i;
    float deg, rad;
    pi = atan(1.0)*4.0;

    /* Loop counter 0 to 12 and degrees from 0, 5, 10,....60*/
    for (int i=0; i<13; i++){
	deg = 5.0*i; /* degree angle from loop counter*/
	rad = degtorad(deg); // convert to rads
	result[i] = tan(rad); // compute and store tan
    }
    /* print array*/
    for (int i=0; i<13; i++){
	printf("Tan(%2d deg) = %f\n", 5*i, result[i]);
    }


     /* Trapezoidal integral of tan(x) from 0 to 60 degs*/

    printf("Trapezoidal area = %f\n", area());
    printf("Exact (ln 2)     = %f\n", log(2.0));

    return 0;



}
// function that converts degs to rads
float degtorad(float arg){
    return( (pi * arg)/180.0);
}




/* Trapezoidal rule using the global tan array (12 intervals of 5 degrees) */
float area(void) {
    int i;
    float h = degtorad(5.0);       //step size in rads
    float sum = result[0] + result[12];   // end points

    for (i = 1; i < 12; i++) {
        sum += 2.0 * result[i];      // interior points 
    }

    return (h / 2.0) * sum;
}
