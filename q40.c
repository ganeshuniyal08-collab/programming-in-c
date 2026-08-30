//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main(){
    int a,b=0,c=0,d=1;
    printf("enter a binary number:");
    scanf("%d", &a);
    while(a!=0){
        b=a%10;
        if (b==0){
            b=1;
        }
        else if (b==1){
            b=0;
        }
        c=c+(b*d);
        d=d*10;
        a/=10;
    }
    printf("1s compliment of binary number:%d",c);
    return 0;
}