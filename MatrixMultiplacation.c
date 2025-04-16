#include <stdio.h>
#include <math.h>

int main(void) {
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;

    printf("Enter row and column value for 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter row and column for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if ((r1 == r2) && (c1 == c2)) {
        printf("Enter values for 1st matrix:\n");
        for (size_t i = 0; i < r1; i++) { 
            for (size_t j = 0; j < c1; j++) {
                printf("Enter value at position %lu %lu: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nFirst matrix looks like:\n");
        for (size_t i = 0; i < r1; i++) {
            for (size_t j = 0; j < c1; j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        printf("Enter values for 2nd matrix:\n");
        for (size_t i = 0; i < r2; i++) {
            for (size_t j = 0; j < c2; j++) {
                printf("Enter value at position %lu %lu: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nSecond matrix looks like:\n");
        for (size_t i = 0; i < r2; i++) {
            for (size_t j = 0; j < c2; j++) {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        // Matrix addition
        for (size_t i = 0; i < r1; i++) {
            for (size_t j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nResult of matrix addition:\n");
        for (size_t i = 0; i < r1; i++) {
            for (size_t j = 0; j < c1; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix addition is not possible. The dimensions do not match.\n");
    }

    return 0;
}
