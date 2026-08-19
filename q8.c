/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}