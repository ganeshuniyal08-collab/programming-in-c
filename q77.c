//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    printf("Enter no. of rows: ");
    scanf("%d", &a);
    printf("Enter no. of columns: ");
    scanf("%d", &b);

  
    if (a != b) {
        printf("Error: Matrix must be square (rows == columns).\n");
        return 1; 
    }

    int matrix[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    bool is_distinct = true;
    
    
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = false;
                break;
        }
        if (!is_distinct) {
            break; // Exit outer loop early
        }
    }

    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
