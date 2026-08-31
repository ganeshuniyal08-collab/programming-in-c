//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){
    int i,b=0;
    printf("Enter a number:");
    scanf("%d",&i);
    for(int n=1;n<i;n++){
        if(i%n==0){
            b=b+n;
        }
    }
    if(i==b){
            printf("Perfect number");
        }
    else{
            printf("Not perfect number");
        }
    return 0;
}
