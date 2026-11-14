//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include<stdio.h>
#include<string.h>
struct rec{
    char Name[50];
    int Roll;
    float Marks;
};
int main(){
    struct rec st[5];
    for(int i=0;i<5;i++){
        printf("\nName\n:");
        scanf("%s",st[i].Name);
        printf("\nRoll no.\n:");
        scanf("%d",&st[i].Roll);
        printf("\nName\n:");
        scanf("%f",&st[i].Marks);
    }
    for(int i=0;i<5;i++){
        printf("%-20s | %-10d | %-10.2f\n",st[i].Name ,st[i].Roll ,st[i].Marks);
    }
    return 0;
}