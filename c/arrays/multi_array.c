#include <stdio.h>

/*
 * Multiplying two matrices
 * A prerequisite for multiplying two matrices is that the number of columns in the first
 * matrix must be equal to the number of rows in the second matrix ->  2 * 3 and 3 * 4 
 * */
int main()
{
    int matA[2][3], matB[3][4], matR[2][4];

    int i, j, k;
    printf("Enter elements of the first matrix of order 2 * 3 \n");
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter elements of the second matrix of order 3 * 4 \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matB[i][j]);
        }
    }
    for (i = 0; i < 2 ; i++) {
        for(j = 0; j < 4; j++) {
            matR[i][j] = 0;
            // 8 iterations is the result of matR[2][4] 
            for(k = 0; k < 3; k++) {
                matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
            }
        }
    }
    printf("\nFirst matrix is \n");
    for (i=0; i < 2; i++) {
        for (j=0; j < 3 ; j++) {
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix is \n");
    for (i=0; i<3; i++) {
        for (j=0;j<4; j++) {
            printf("%d\t", matB[i][j]);
        }
        printf("\n");
    }
    printf("Matix multiplication is \n");
    for(i=0; i < 2; i++) {
        for (j=0; j < 4; j++) {
            printf("%d\t", matR[i][j]);
        }
        printf("\n");
    }
    return 0;
}

