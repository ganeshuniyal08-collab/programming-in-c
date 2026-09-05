/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
int main(){
  int a,b,c,i,x;
  for(a=1;a<=5;a++){
    b=a-1;
    c=5-b;
    i=0;
    x=0;
    while(x<b){
      printf(" ");
      x++;
    }
    while(i<c){
      printf("*");
      i++;
    
    }
    printf("\n");
  }
  return 0;
}