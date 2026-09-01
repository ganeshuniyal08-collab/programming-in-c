/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
# include <stdio.h>
int main(){
  int i,b;
  for(i=1;i<=5;i++){
    for(b=1;b<=5;b++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
