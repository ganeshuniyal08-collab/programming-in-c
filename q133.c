//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <string.h>
#include <stdio.h>
enum months{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEPT,
    OCT,
    NOV,
    DEC
};
int main(){
    char month[5];
    scanf("%s",month);
    enum months a;
    if(strcmp(month,"JAN")==0){
        a=JAN;
    }
    else if(strcmp(month,"FEB")==0){
        a=FEB;
    }
    else if(strcmp(month,"MAR")==0){
        a=MAR;
    }
    else if(strcmp(month,"APR")==0){
        a=APR;
    }
    else if(strcmp(month,"MAY")==0){
        a=MAY;
    }
    else if(strcmp(month,"JUN")==0){
        a=JUN;
    }
    else if(strcmp(month,"JUL")==0){
        a=JUL;
    }
    else if(strcmp(month,"AUG")==0){
        a=AUG;
    }
    else if(strcmp(month,"SEPT")==0){
        a=SEPT;
    }
    else if(strcmp(month,"OCT")==0){
        a=OCT;
    }
    else if(strcmp(month,"NOV")==0){
        a=NOV;
    }
    else if(strcmp(month,"DEC")==0){
        a=DEC;
    }
    if(a%2==0 && a<7){
        printf("31 days");
    }
    else if(a%2!=0 && a!=1 && a<7){
        printf("30 days");
    }
    else if(a%2!=0 && a>6){
        printf("31 days");
    }
    else if(a%2==0 && a>6){
        printf("30 days");
    }
    else{
        printf("28 or 29 days");
    }
    return 0;
}