#include <stdio.h>

void printBorder(int count) {
    for (int i = 0; i < count; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int count;
    printf("Enter star count: ");
    scanf("%d", &count);
    
    printBorder(count);
    
    return 0;
}

