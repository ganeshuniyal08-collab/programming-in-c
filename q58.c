//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main(){
    int a,c;
    printf("Enter no. of elements in array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("enter value for slot %d", i);
        scanf("%d", &b[i]);
    }
    int e=b[0],d=b[0];
    for (c=0;c<a;c++){
        if(d<b[c]){
        d=b[c];
        }
        if(e>b[c]){
        e=b[c];
        }
    }
    printf("Max =%d,",d);
    printf("Min =%d ",e);
    return 0;
}