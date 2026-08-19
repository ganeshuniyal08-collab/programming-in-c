/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else {
        
        if (num < 0) {
            printf("%d is a negative number.\n", num);
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}