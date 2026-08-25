//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include<math.h>
int main(){
    int a,b=0,c,d,e,f;
    printf("enter a number:");
    scanf("%d",&a);
    f=a;
    while(a!=0){
        c=a%10;
        d=pow(c,e);
        b=b+d;
        a/=10;
    }
    if(f==b) {
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}