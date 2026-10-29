//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0;
    int ch;
    int prev_ch = '\0';
    
    while ((ch = fgetc(file)) != EOF) {
        char_count++;
        
        if (ch == '\n') {
            line_count++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
        
        prev_ch = ch;
    }
    
    if (char_count > 0 && prev_ch != '\n') {
        line_count++;
    }
    
    fclose(file);
    
    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);
    
    return 0;
}