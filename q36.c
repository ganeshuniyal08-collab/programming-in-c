//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
    int a,b,c=1;
    printf("enter 1st number: ");
    printf("enter 2nd number: ");
    scanf("%d %d",&a,&b);
    if (a<b){
    for (int i=1; i<=a; i++){
        if (a%i==0 && b%i==0){
            c=i;
        }
    }
    }
    else {
    for (int i=1; i<=b; i++){
        if (a%i==0 && b%i==0){
            c=i;
        }
    }
    }
    return 0;
}