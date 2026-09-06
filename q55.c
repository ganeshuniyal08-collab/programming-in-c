//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main(){
    int n,a=2,c;
    printf("Enter a number:");
    scanf("%d",&n);
    while(a<=n){
        c=0;
        for (int i=2;i<a;i++){
            if (a%i==0){
               c=1; 
            }
        }
        if(c==0){
            printf("%d ", a);
        }
        a++;
    }
}