#include <stdio.h>  //ganesh 09-09-2026
#include <string.h>

int main() {
    // declaring string array to hold word
    char str[100];
    
    // taking input word from user
    printf("Input: ");
    scanf("%s", str);
    
    // Task 1: Find the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++; // counting characters one by one
    }
    
    // Task 2: Check Palindrome condition
    // assuming string is palindrome first (1 = true)
    int isPalindrome = 1; 
    
    // running loop up to middle of the string
    for (int i = 0; i < len / 2; i++) {
        // checking if character from start matches character from end
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // set to false if mismatch found
            break;            // stop checking further
        }
    }
    
    // printing final result
    if (isPalindrome == 1) {
        printf("Output: Palindrome\n");
    } else {
        printf("Output: Not a Palindrome\n");
    }
    
    return 0;
}

