//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main(){
    int a,b=0,c=1;
    printf("enter a number:");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        if (b%2) {
            c=c*b;
        }
        a/=10;
    }
    printf("sum of odd digits : %d",c);
    return 0;
}