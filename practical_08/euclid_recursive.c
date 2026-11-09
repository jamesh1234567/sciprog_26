#include<stdio.h>
#include<stdlib.h>

// Declare function
int RecursiveGCD(int a, int b);

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
    // Print GCD
    printf("GCD of the 2 numbers entered is: %d\n", RecursiveGCD(a, b));


    return 0;
}
// Recursive fn
int RecursiveGCD(int a, int b){
    if (b==0){
	return abs(a); // GCD always positive
    }
    else{
	return RecursiveGCD(b, a%b);
    }
}
