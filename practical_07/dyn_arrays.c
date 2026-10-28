#include <stdio.h>
#include <stdlib.h>


// Declare prototypes
int *allocatearray(int length);
void fillwithones(int *arr, int length);
void printarray(int *arr, int length);
void freemem(int *arr);


 
int main(void){
// Declare variables
    int n;
    int *arr;

// User inputs length of array
    printf("Pls enter length of array:");
    scanf("%d", &n);

// Call functions
    arr = allocatearray(n);
    fillwithones(arr, n);
    printarray(arr, n);
    freemem(arr);

    return 0;
}

int *allocatearray(int length){
    int *p; // decalare pointer to int
    p = (int *) malloc(length * sizeof(int)); //allocate memory
    if (p==NULL){ // error handling
	printf("Failed memory alloc!\n");
	exit(1);
    }
    return p; //returns address
}

void fillwithones(int *arr, int length){
    for (int i = 0; i<length; i++){
	arr[i] = 1; // takes pointer to array of ints, fills with 1's
    }
}

void printarray(int *arr, int length){
    for (int i = 0; i < length; i++){
	printf("%d\n", arr[i]); //takes pointer to array of ints, prints each cell
    }
}

void freemem(int *arr){
    free(arr);// frees memory allocated to array of ints
}

