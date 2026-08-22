//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    int cost_price, selling_price;
    printf("Enter cost price and selling price;");
    scanf("%d %d", &cost_price, &selling_price);
    if(selling_price > cost_price){
        int profit = selling_price - cost_price;
        float profit_percentage = (profit * 100.0)/cost_price;
        printf("Profit %.0f%%\n", profit_percentage);
    }
    else if(selling_price < cost_price){
        int loss = cost_price - selling_price;
        float loss_percentage = (loss * 100.0)/cost_price;
        printf("Loss %.0f%%\n", loss_percentage);
    }
    else{
        printf("No profit No Loss\n");
    }
    return 0;
}