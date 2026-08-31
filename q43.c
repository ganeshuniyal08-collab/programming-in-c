//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main(){
    int a,b=0,c,d=0,e=0;
    printf("Enter a number:");
    scanf("%d",&a);
    d=a;
    while(a!=0){
        b=a%10;
        c=1;
        for (int i=1; i<=b;i++){
                c=c*i;
            }
        e=e+c;
        a/=10;
    }
    if(e==d){
        printf("Strong number");
    }
    else{
        printf("Not strong number");
    }
    return 0;
}