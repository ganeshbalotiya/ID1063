#include <stdio.h>  //ganesh 09-09-2026
#include <string.h>

int main() {
    // character array to hold the full input string including spaces
    char str[100];
    
    printf("Input: ");
    
    // fgets reads the whole line of text including spaces
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        // Task 1: Find length and remove the trailing newline character
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0'; // replace '\n' with null terminator
            len--;               // decrease length counter accordingly
        }
        
        // Task 2: Check Palindrome condition
        int isPalindrome = 1; // set flag to 1 assuming string is palindrome
        
        // loop runs up to the middle of the string
        for (int i = 0; i < len / 2; i++) {
            // compare front character str[i] with back character str[len - 1 - i]
            if (str[i] != str[len - 1 - i]) {
                isPalindrome = 0; // mismatch found, set flag to 0
                break;            // stop checking further
            }
        }
        
        // print final result based on flag value
        if (isPalindrome == 1) {
            printf("Output: Palindrome\n");
        } else {
            printf("Output: Not a Palindrome\n");
        }
    }
    
    return 0;
}

