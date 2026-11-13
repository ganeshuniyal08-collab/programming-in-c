//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int roll,marks;
};
int main(){
    int a;
    struct student s;
    scanf("Name: %s\n Roll: %d\n Marks: %d",s.name ,&s.roll ,&s.marks);
    printf("Name: %s | Roll: %d | Marks: %d",s.name ,s.roll ,s.marks);
    return 0;
}