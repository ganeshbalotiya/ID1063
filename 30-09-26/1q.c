//ganesh balotiya 
//30-09-26


#include <stdio.h> 

#define MAX 20

// Function to compute a single entry (row, col) of the matrix product A * B
int productEntry(int A[][MAX], int B[][MAX], int row, int col, int common) {
    int sum = 0;
    for (int k = 0; k < common; k++) {
        sum += A[row][k] * B[k][col];
    }
    return sum;
}

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of Matrix A
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    int A[MAX][MAX];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of Matrix B
    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    int B[MAX][MAX];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int C[MAX][MAX];

    // Compute the product matrix using productEntry for each entry
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = productEntry(A, B, i, j, c1);
        }
    }

    // Print the product matrix A * B
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d%s", C[i][j], (j == c2 - 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}

