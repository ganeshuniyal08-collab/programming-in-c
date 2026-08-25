//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    int a,b=0,c;
    printf("enter a number:");
    scanf("%d",&a);
    c=a;
    while(a!=0){
        b=b*10+(a%10);
        a/=10;
    }
    if (c==b){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}