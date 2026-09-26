//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n') {
            len++;
        }
        str[len] = '\0';         
        int is_palindrome = 1;
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            if (str[i] != str[j]) {
                is_palindrome = 0;
                break;
            }
        }
                if (is_palindrome) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
        return 0;
}