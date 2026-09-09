#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int index = -1;
    
    printf("Input: ");
    scanf("%s", str);
    
    printf("character: ");
    scanf(" %c", &ch);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            index = i;
            break;
        }
    }
    
    printf("Output: %d\n", index);
    
    return 0;
}

