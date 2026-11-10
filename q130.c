//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main(){
    int n,roll,marks;
    char name[50];
    printf("Enter no. of student records to be pushed:");
    scanf("%d",&n);
    FILE *file=fopen("records.txt","w+");
    for(int i=1;i<=n;i++){
    printf("Enter name of student:");
    scanf("%s",name);    
    printf("Enter roll no. of student:");
    scanf("%d",&roll);
    printf("Enter marks of student:");
    scanf("%d",&marks);
    fprintf(file,"%s %d %d\n",name,roll,marks);
    }
    rewind(file);
    while(fscanf(file,"%s %d %d", name, &roll, &marks)==3){
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    }
    fclose(file);
    return 0; 
}