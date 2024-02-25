#include <stdio.h>
#define MAX 10
//better code will be made with use of functions
int main() {
    int m1[MAX][MAX], m2[MAX][MAX], mul[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter order of first matrix (Rows then Columns)\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter order of second matrix (Rows then Columns)\n");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2) {
        // Matrix multiplication possible

        printf("For First Matrix\n");

        for (int i = 0; i < r1; i++) {  // matrix 1
            for (int j = 0; j < c1; j++) {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
            }
        }

        printf("Now For Second\n");

        for (int i = 0; i < r1; i++) {  // matrix 2
            for (int j = 0; j < c1; j++) {
                printf("Enter element at [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }

        // Multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                mul[i][j] = 0;
                for (int x = 0; x < c1; x++) {
                    mul[i][j] = mul[i][j] + m1[i][x] * m2[x][j];
                }
            }
        }

        // Printing
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%6d", mul[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication not possible (columns of first matrix must equal rows of second matrix).\n");
    }

    return 0;
}