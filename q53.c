/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    for (a=0;a<=9;a++){
        if(a%2==0){
            for(b=0;b<=a;b++){
                printf("*");
            }
            printf("\n");
        }
    }
    for (c=7;c>=0;c--){
        if(c%2==0){
            for(d=0;d<=c;d++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}