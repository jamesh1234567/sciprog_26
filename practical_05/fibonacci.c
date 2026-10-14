#include <stdio.h>
#include <math.h>

void fibonacci(int *Fn_1, int *Fn_2); // declare function


int main (void){
    int n;  // n, to be input by user
    int Fn_1 = 1; // initial value of F1
    int Fn_2 = 0;  // initial value of F0
    printf("Pls enter a value for n\n");
    scanf("%d", &n);  //user enters value for n


    for (int i = 0; i <= n; i++){  //First number in fib series is 0
	if (i==0){
	    printf("F_0 = 0\n");}
	else if (i==1){
	    printf("F_1 = 1\n");}  // 2nd number in fib series is 1
	else{
	    fibonacci(&Fn_1,&Fn_2);  // calls fibonacci function to update Fn
	    printf("F_%d = %d\n", i, Fn_1);}

    }
    return 0;
}

void fibonacci(int *Fn_1, int *Fn_2){
    int temp;

    temp = *Fn_1;
    *Fn_1 =  temp + *Fn_2;
    *Fn_2 = temp;  //fibonacci function where Fn-1 --> Fn and Fn-2 --> Fn-1
}
