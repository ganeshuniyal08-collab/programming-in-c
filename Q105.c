// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main()
{
    int n, a[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("-1\n");
        return 0;
    }

        for (int i = 0; i < n; i++)
    {
        printf("Enter the %d elements of the array: ", i + 1);
        scanf("%d", &a[i]);
    }

    int count = 0, candidate = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = a[i];
            count = 1;
        }
        else if (a[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == candidate)
        {
            frequency++;
        }
    }

    if (frequency > n / 2)
    {
        printf("%d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}