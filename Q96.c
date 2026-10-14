// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i + 1] == '\0')
        {
            int end = (str[i] == ' ') ? i - 1 : i;
            for (int j = end; j >= start; j--)
            {
                putchar(str[j]);
            }
            if (str[i] == ' ')
            {
                putchar(' ');
            }
            start = i + 1;
        }
    }
    putchar('\n');
    return 0;
}