//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main(){
    int i,b=0,c=0,d=0;
    printf("Enter a number: ");
    scanf("%d",&i);
    b=i%10;
    i/=10;
    while(i!=0){
        c=(c*10)+(i%10);
        i/=10;
    }
    d=c%10;
    c/=10;
    while(c!=0){
        b=(b*10)+(c%10);
        c/=10;
    }
    b=b*10+d;
    printf("no. after swapping first and last digits are:%d",b);
    return 0;
}