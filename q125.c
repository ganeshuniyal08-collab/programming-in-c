//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char text[1000];
    
    scanf("%[^\n]", text);
    
    FILE *file = fopen("data.txt", "a");
    
    if (file == NULL) {
        return 1;
    }
    
    fprintf(file, "\n%s", text);
    
    fclose(file);
    
    printf("File updated successfully with appended text.\n");
    
    return 0;
}