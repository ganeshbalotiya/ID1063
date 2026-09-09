#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a word (min length 2): ");
    scanf("%s", str);
    
    // Swap the first two characters
    char temp = str[0];
    str[0] = str[1];
    str[1] = temp;
    
    printf("Modified word: %s\n", str);
    
    return 0;
}

