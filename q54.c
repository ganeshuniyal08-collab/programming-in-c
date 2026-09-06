/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main(){
    int a,b,c,d,e,f=3,g,h=1;
    for (a=0;a<=7;a++){
        if(a%2==0){
            for(e=0;e<f;e++){
                printf(" ");
            }
            for(b=0;b<=a;b++){
                printf("*");
            }
            printf("\n");
            f--;
        }
    }
    for (c=5;c>=0;c--){
        if(c%2==0){
            for(g=0;g<h;g++){
                printf(" ");
            }
            for(d=0;d<=c;d++){
                printf("*");
            }
            printf("\n");
            h++;
         }
    }
    return 0;
}