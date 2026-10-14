#include <stdio.h>
#include <math.h>

double arctanh1(double x, double delta);
double arctanh2(double x);

int main(void){

    double delta;
    double method1[200]; // array to hold results of arctanh1
    double method2[200]; // array to hold results of arctanh2

    double error;
    printf("Pls enter a positive, real value for delta\n");
    error = scanf("%lf", &delta); // user enters a value for delta, must be positive
    if (scanf <= 0) {
	printf("Delta must be positive! Please try again\n");
	return 1;
    }

    int i = 0;
    for (int i = 0; i<181; i++){ //181 pts between -0.9 and 0.9 when incrementing by 0.01
	double x = -0.9 + 0.01*i; // increment from -0.9 to 0.9
	method1[i] = arctanh1(x, delta); // pass x and delta to function 1
	method2[i] = arctanh2(x);  // pass x to function 2
	printf("x = %5.2f  series = %.10f  log = %.10f  diff = %.2e\n",
               x, method1[i], method2[i], method1[i] - method2[i]);;
    }


    return 0;
}

double arctanh1(double x, double delta){
    double sum = 0.0; //Holds value of sum
    int j = 0;
    double temp = x;
    while(fabs(temp) >= delta){ // stops when new element to be added is smaller than delta
	sum = sum + temp; // adds new element of sum to total
	j = j + 1;
	temp = pow(x, 2*j + 1)/(2+j + 1); // calculate new elements of sum to be added
    }
    return sum;
}

double arctanh2(double x){
    return 0.5 * (log(1.0 + x) - log(1.0 - x));
}
