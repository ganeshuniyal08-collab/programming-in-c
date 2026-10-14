// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    if (fgets(a, sizeof(a), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }
    for (int i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        for (int j = i; a[j] != '\0' && a[j] != '\n'; j++)
        {
            for (int k = i; k <= j; k++)
            {
                putchar(a[k]);
            }
            if (a[j + 1] != '\0' && a[j + 1] != '\n')
            {
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}