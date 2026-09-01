//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include<stdio.h>
int main(){
  int n;
  float e=0;
  double c=0;
  printf("Enter the no. of terms:");
  scanf("%d",&n);
  for(float b=1;b<=n;b++){
    e=2*b;
    c=c+((e)/((2*e)-1));
  }
  printf("Approximate sum :%.2f\n",c);
  return 0;
}