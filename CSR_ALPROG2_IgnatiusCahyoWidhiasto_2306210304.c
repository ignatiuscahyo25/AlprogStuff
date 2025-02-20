#include <stdio.h>

int main(){
    float A[3][3] = {
        {2, 1, 1},
        {3, 2, 1},
        {1, 1, 2}};

    float T[3][3]; // Pembetulan
    float X[3][3]; // Pembetulan

    /* Nyari Det = (00*11*22)+(01*12*21)+(02*10*21) -
                   (02*11*20)-(00*12*21)-(01*10*22)*/

    float a = A[0][0], b = A[0][1], c = A[0][2];
    float d = A[1][0], e = A[1][1], f = A[1][2];
    float g = A[2][0], h = A[2][1], i = A[2][2];

    float det = ((a * e * i)+(b * f * g)+(c * d * h)) - ((c * e * g)+(a * f * h)+(b * d * i));

    // Pembetulan

    printf("The Original Matrix Equals:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%.1f", A[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    printf("The Determinant is ");
    printf("%.1f\n", det);

    printf("\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            T[j][i] = A[i][j];
        }
    }

    printf("The Transposed Matrix Equals:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%.1f", T[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    printf("The Final Result is:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            X[i][j] = (1 / det) * (T[i][j]);
            printf("%.1f", X[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}