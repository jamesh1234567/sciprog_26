#include <stdio.h>
#include <math.h>


int main(void) {
    // Initialise n, p, q
    int n = 5;
    int p = 3;
    int q = 4;

    // Declare arrays A, B, C
    double A [n][p];
    double B [p][q];
    double C [n][q];

    // Loop to initialise A
    for (int i = 0; i < n; i++){
	for (int j = 0; j < p; j++){
	    A[i][j] = i + j;
	}
    }

    // Loop to initialise B
    for (int i = 0; i < p; i++){
        for (int j = 0; j < q; j++){
            B[i][j] = i - j;
        }
    }

    // Loop to initialise C
    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++){
            C[i][j] = 0.0;
        }
    }

    // Determine elements of C (C = A x B)
    for (int i = 0; i < n; i++){
	for (int j = 0; j < q; j++){
	    for (int k = 0; k < p; k++){
		C[i][j] += A[i][k] * B[k][j];
	    }
	}
    }

    // Print A
    printf("Matrix A: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            printf("%lf ", A[i][j]);
        }
	printf("\n");
    }

    // Print B 
    printf("Matrix B: \n");
    for (int i = 0; i < q; i++){
        for (int j = 0; j < q; j++){
            printf("%lf ", B[i][j]);
        }
        printf("\n");
    }

    // Print C
    printf("Matrix C: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++){
            printf("%lf ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
