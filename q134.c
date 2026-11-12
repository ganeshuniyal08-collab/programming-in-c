//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<string.h>
#include<stdio.h>
enum result{
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main(){
    char res[10];
    scanf("%s",res);
    enum result a;
    if(strcmp(res,"SUCCESS")==0){
        a=SUCESS;
    }
    else if(strcmp(res,"FAILURE")==0){
        a=FAILURE;
    }
    else if(strcmp(res,"TIMEOUT")==0){
        a=TIMEOUT;
    }
    if(a==SUCCESS){
        printf("Operation sucessfull");
    }
    else if(a==FAILURE){
        printf("Operation failed");
    }
    else if(a==TIMEOUT){
        printf("Operation timed out");
    }
    return 0;
}