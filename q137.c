//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <string.h>
#include <stdio.h>
enum roles{
    ADMIN,
    USER,
    GUEST
};
int main(){
    char roll[7];
    scanf("%s",roll);
    enum roles a;
    if(strcmp(roll,"ADMIN")==0){
        a=ADMIN;
    }
    else if(strcmp(roll,"USER")==0){
        a=USER;
    }
    else if(strcmp(roll,"GUEST")==0){
        a=GUEST;
    }
    if(a==ADMIN){
        printf("Welcome Admin!");
    }
    else if(a==USER){
        printf("Welcome User!");
    }
    else if(a==GUEST){
        printf("Welcome Guest!");
    }
    return 0;
}