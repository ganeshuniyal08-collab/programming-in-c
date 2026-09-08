//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main(){
    int a,c,d=0,e=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    for (c=0;c<a;c++){
        if(b[c]%2==0){
           d++; 
        }
        else{
        e++;
        }
    }
    printf("Even =%d, Odd =%d ",d,e);
    return 0;
}