//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    double b=1;
    printf("Enter no. of terms:");
    scanf("%d",&a);
    for(float i=2;i<=a;i++){
        b=b+(((2*i)-1)/(2*i));

    }
    printf("approximat sum :%.1f\n",b);
    return 0;
    
}