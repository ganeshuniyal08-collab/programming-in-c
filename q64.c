//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main(){
    int x,y,a=0,c,f,g;
    int e[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter the integer: ");
    scanf("%d",&x);
    y=x;
    int z=0;
    while(y!=0){
        z++;
        y/=10;
    }
    int b[z];
    for(int i=0; i<z; i++){
        y=x%10;
        e[y]++;
        x/=10;
    }
    f=0;
    for(int p=0;p<10;p++){
        if(e[p]>f){
           g=p;
           f=e[p]; 
        }
    }
    if(f){
        printf("%d",g);
    }
    return 0;
}