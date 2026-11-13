//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>
enum gender {
    MALE,
    FEMALE
};
struct Person {
    enum gender gndr;
};
int main() {
    struct Person p; // Declare a struct variable
    char g[10];
    printf("Gender=");
    scanf("%s", g);
    if (strcmp(g, "MALE") == 0) {
        p.gndr = MALE;
    } 
    else if (strcmp(g, "FEMALE") == 0) {
        p.gndr = FEMALE;
    }
    if (p.gndr == MALE) {
        printf("Male\n");
    } 
    else if (p.gndr == FEMALE) {
        printf("Female\n");
    }
    
    return 0;
}