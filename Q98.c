// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter a name: ");
    if (fgets(a, sizeof(a), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }

    int i = 0;
    int has_initials = 0;

    while (a[i] != '\0')
    {
        while (a[i] == ' ' || a[i] == '\t')
        {
            i++;
        }
        if (a[i] == '\0' || a[i] == '\n')
        {
            break;
        }

        int start = i;
        while (a[i] != '\0' && a[i] != '\n' && a[i] != ' ' && a[i] != '\t')
        {
            i++;
        }

        while (a[i] == ' ' || a[i] == '\t')
        {
            i++;
        }

        if (a[i] == '\0' || a[i] == '\n')
        {
            if (has_initials)
            {
                printf(" ");
            }
            while (a[start] != '\0' && a[start] != '\n' && a[start] != ' ' && a[start] != '\t')
            {
                putchar(a[start]);
                start++;
            }
        }
        else
        {
            printf("%c.", a[start]);
            has_initials = 1;
        }
    }
    printf("\n");
    return 0;
}