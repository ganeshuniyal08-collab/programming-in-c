/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main(){
    int a,b,c,d;
    for(a=1;a<=5;a++){
        b=5-a;
        c=b+1;
        d=0;
        while(d<b){
            printf(" ");
            d++;
        }
        while(c<=5){
            printf("%d",c);
            c++;
        }
    printf("\n");    
    }
    return 0;
}
