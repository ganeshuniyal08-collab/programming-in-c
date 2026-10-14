// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a name: ");
    if (fgets(a, sizeof(a), stdin) == NULL)
    {
        printf("Error reading input.\n");
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (i == 0 || a[i - 1] == ' ')
        {
            printf("%c.", a[i]);
        }
    }
    printf("\n");
    return 0;
}