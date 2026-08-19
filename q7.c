/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nBefore swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    // Swapping logic using addition and subtraction
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    return 0;
}