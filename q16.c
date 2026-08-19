//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main(){
    int x,y,z;
    printf("enter three numbers:")
    scanf("%d %d %d",&x,%y,&z);
    if(x>y && x>z){
        printf("largest %d",x);
    }
    else if (y>x&& y>z){
        printf("largest %d",y);
    }
    else{
        printf("largest %d",z);
    }
    
}