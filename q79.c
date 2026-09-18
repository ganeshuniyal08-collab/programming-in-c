//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter no. of rows: ");
    scanf("%d", &a);
    printf("Enter no. of columns: ");
    scanf("%d", &b);   
    int matrix[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Output:\n");
    for (int s = 0; s < a + b - 1; s++) {
        if (s % 2 == 0) {
            int start_row = (s < a) ? s : a - 1;
            int end_row = (s < b) ? 0 : s - b + 1;
            for (int i = start_row; i >= end_row; i--) {
                int j = s - i;
                printf("%d ", matrix[i][j]);
            }
        } else {
            int start_row = (s < b) ? 0 : s - b + 1;
            int end_row = (s < a) ? s : a - 1;
            for (int i = start_row; i <= end_row; i++) {
                int j = s - i;
                printf("%d ", matrix[i][j]);
            }
        }
    }
    
    return 0;
}