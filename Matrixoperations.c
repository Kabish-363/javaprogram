#include <stdio.h>

int main() {
    int A[10][10], B[10][10], result[10][10];
    int i, j, k, r1, c1, r2, c2, choice;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nChoose Operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of A\n");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            if(r1 == r2 && c1 == c2) {
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        result[i][j] = A[i][j] + B[i][j];
                    }
                }
                printf("Addition Result:\n");
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Addition not possible!\n");
            }
            break;

        case 2:
            if(r1 == r2 && c1 == c2) {
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        result[i][j] = A[i][j] - B[i][j];
                    }
                }
                printf("Subtraction Result:\n");
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Subtraction not possible!\n");
            }
            break;

        case 3:
            if(c1 == r2) {
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c2; j++) {
                        result[i][j] = 0;
                        for(k = 0; k < c1; k++) {
                            result[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                printf("Multiplication Result:\n");
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c2; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Multiplication not possible!\n");
            }
            break;

        case 4:
            printf("Transpose of Matrix A:\n");
            for(i = 0; i < c1; i++) {
                for(j = 0; j < r1; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}