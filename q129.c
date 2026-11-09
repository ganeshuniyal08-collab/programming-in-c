//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include<stdio.h>
int main(){
    int sum=0,count=0;
    float avg;
    FILE *file= fopen("numbers.txt", "r");
    if(file==NULL){
        return 1;
    }
    int i;
    while(fscanf(file,"%d",&i)==1){
        sum+=i;
        count++;
    }
    avg=(float)sum/count;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);
    fclose(file);
    return 0;
}