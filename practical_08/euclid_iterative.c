#include<stdio.h>
#include<stdlib.h>

// Declare function
int IterativeGCD(int a, int b);

int main(void){
    int a, b, nread; //Declare variables

    // User inputs 2 integers (with error hanfling)
    printf("Please input two non-zero integers\n");
    nread = scanf("%d %d",&a,&b);
    if (nread != 2) {
        printf("Please try again\n");
        return 1;
    }
    if (a != 0 && b != 0) {
        printf("Both numbers are non-zero\n");
    } else {
        printf("At least one number is zero\n");
	return 1;
    }

    printf("GCD of the 2 numbers entered is: %d\n", IterativeGCD(a, b));


    return 0;
}

int IterativeGCD(int a, int b){
    int temp;
    while(b!=0){
	temp = b;
	b = a%b;
	a = temp;
    }
    return abs(a); // GCD always positive
}
