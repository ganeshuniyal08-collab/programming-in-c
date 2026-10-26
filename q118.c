//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include<stdio.h>
int main(){
    int n,a;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element of array");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n;j++){
        a=0;
        for(int k=0;k<n;k++){
            if (j==arr[k]){
                a=1;
            }
        }
        if (a==0){
            printf("%d",j);
            break;
        }       
    }
    return 0;
}