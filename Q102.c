// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
int main()
{
    int arr[100], n, x;
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error reading input.\n");
        return 1;
    }
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Error reading input.\n");
            return 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Enter the value of x: ");
    if (scanf("%d", &x) != 1)
    {
        printf("Error reading input.\n");
        return 1;
    }
    int ceil_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceil_index = i;
            break;
        }
    }
    printf("The index of the ceil of %d is: %d\n", x, ceil_index);
    return 0;
}