#include <stdio.h>  //ganesh 09-09-2026
#include <string.h>

int main() {
    // declaring variables
    char str[100];
    char ch;
    int index = -1; // setting default index to -1 if character not found
    
    // taking input string from user
    printf("Input: ");
    scanf("%s", str);
    
    // taking input character to search
    printf("character: ");
    scanf(" %c", &ch);
    
    // looping through string to find character
    for (int i = 0; str[i] != '\0'; i++) {
        // checking if current character matches
        if (str[i] == ch) {
            index = i; // storing the index position
            break;     // breaking loop after finding first occurrence
        }
    }
    
    // printing the result
    printf("Output: %d\n", index);
    
    return 0;
}

