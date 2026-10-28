#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declare prototypes
double *allocatearray(int order);
void termsofpoly(double *arr, int order);
void printarray(double *arr, int order);
void freemem(double *arr);


 
int main(void){
// Declare variables
    int order;
    double *arr;

// User inputs order of polynomial
    printf("Pls enter order of polynomial:");
    scanf("%d", &order);

// Call functions
    arr = allocatearray(order);
    termsofpoly(arr, order);
    printarray(arr, order);
    freemem(arr);

    return 0;
}

double *allocatearray(int order){
    double *arr; // decalare pointer to double
    arr = (double *) malloc((order + 1) * sizeof(double)); //allocate memory
    if (arr==NULL){ // error handling
	printf("Failed memory alloc!\n");
	exit(1);
    }
    return arr; //returns address
}

void termsofpoly(double *arr, int order){
    int fact = 1;
    for (int i = 0; i<=order; i++){
	for (int j = 1; j<=i; j++){
	    fact *=j;
	}
	arr[i] = (pow(1.0,i))/fact; // takes pointer to array of doubles, fills in value of term to each ce;;
	fact = 1;
    }
}

void printarray(double *arr, int order){
    double sum = 0.0;
    for (int i = 0; i <= order; i++){
	sum += arr[i];
    }
    printf("%.15f\n", sum); //prints sum of array of doubles (terms)
    printf("Actual value of e is 2.71828\n");
    printf("Diff = %.15f\n", sum-exp(1.0));
}

void freemem(double *arr){
    free(arr);// frees memory allocated to array of doubles
}

/*
The estimate gets worse at higher orders because factorial is too large to be stored as an int, e.g. 13! is 6.2e9 but int only holds up to approx 2.1e9
Fix by declaring fact as a double
*/
