//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include<stdio.h>
int main(){
    int k,len,i=0,j=0,b=0,x;
    printf("enter k:");
    scanf("%d",&k);
    printf("enter no. of elements in arr:");
    scanf("%d",&len);
    int arr[len];
    while (i<len)
    {
        printf("enter element of array");
        scanf("%d",&arr[i]);
        i++;
    }
    for(j=0;j<=len-k;j++){
        x=0;
            for(b=j;b<j+k;b++){
                if(arr[b]<0){
                    printf("%d ", arr[b]);
                    x=1;
                    break; 
                }
            }
            if(x==0){
                printf("0 ");
            }
    }
    return 0;
}