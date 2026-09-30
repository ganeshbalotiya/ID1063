

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

    // Generate and print each entry (0 or 1)
    for (int i = 0; i < n; i++) {
        vec[i] = rand() % 2;
        printf("%d%s", vec[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");

    free(vec);
}

int main() {
    int n = 10; // Example size of the vector

    // Seed the random number generator
    srand(time(0));

    printf("Binary vector of size %d:\n", n);
    printBinaryVector(n);

    return 0;
}

