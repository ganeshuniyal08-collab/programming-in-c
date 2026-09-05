/*Q49: Write a program to print the following pattern:
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
  int a,b,c=5;
  for (a=1;a<=5;a++){
    b=5-a+1;
    while(b<=5){
      printf("%d", b);
      b++;
    }
    printf("\n");
  }
  return 0;
}