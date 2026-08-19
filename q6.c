/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
    float num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nBefore swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    return 0;
}