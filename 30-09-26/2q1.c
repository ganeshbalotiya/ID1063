//ganesh balotiya 
//30-09-26

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate and print a binary vector of size n
void printBinaryVector(int n) {
    int *vec = (int *)malloc(n * sizeof(int));
    if (vec == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Generate and print each binary entry (0 or 1)
    for (int i = 0; i < n; i++) {
        vec[i] = rand() % 2;
        printf("%d%s", vec[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");

    free(vec);
}

int main() {
    int n;

    // Seed the random number generator
    srand(time(0));

    // Read the size of the vector from standard input
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    printBinaryVector(n);

    return 0;
}

