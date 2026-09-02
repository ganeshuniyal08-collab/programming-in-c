/*Q47: Write a program to print the following pattern:
*
**
***
****
*****


Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main(){
    int a,b;
    for(a=1;a<=5;a++){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
}