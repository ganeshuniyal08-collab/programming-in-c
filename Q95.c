// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
    {
        return 0;
    }

    char temp[200];

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s1[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    char s2[100];
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2))
    {
        printf("Rotation\n");
    }
    else
    {
        printf("Not rotation\n");
    }

    return 0;
}