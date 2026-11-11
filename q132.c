//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <string.h>
#include <stdio.h>
enum traficlight{
RED,
YELLOW,
GREEN
};
int main(){
    enum traficlight signal;
    char a[20];
    scanf("%s",a);
    if(strcmp(a,"RED")==0){
        signal = RED;
    }
    else if(strcmp(a,"YELLOW")==0){
        signal = YELLOW;
    }
    else if(strcmp(a,"GREEN")==0){
        signal = GREEN;
    }
    if(signal==RED){
        printf("Stop");
    }
    else if(signal==YELLOW){
        printf("Wait");
    }
    else if(signal==GREEN){
        printf("Go");
    }
    return 0;
}