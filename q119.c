//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() {
    int a;
    printf("enter no of elments in array:");
    scanf("%d", &a);
    int arr[a];
    int seen[100000] = {0};
    int repeated = -1;
    for(int i = 0; i < a; i++) {
        printf("enter ellement of array:");
        scanf("%d", &arr[i]);   
        if (seen[arr[i]] == 1) {
            repeated = arr[i];
        }
        seen[arr[i]] = 1;
    }
    printf("%d\n", repeated); 
    return 0;
}