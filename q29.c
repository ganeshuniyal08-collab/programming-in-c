//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main(){
    int a, factorial=1;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        factorial*=i;
    }
    printf("factorial of a is : %d",factorial);
    return 0;
}