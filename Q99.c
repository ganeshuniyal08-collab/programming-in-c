// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    int d, m, y;
    printf("Enter a date in dd/04/yyyy format: ");
    if (scanf("%d/%d/%d", &d, &m, &y) != 3)
    {
        printf("Invalid input format.\n");
        return 1;
    }
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("%02d-%s-%d\n", d, months[m - 1], y);
    return 0;
}