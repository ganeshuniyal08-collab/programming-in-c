//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    FILE *in_file = fopen("input.txt", "r");
    if (in_file == NULL) {
        return 1;
    }
    
    FILE *out_file = fopen("output.txt", "w");
    if (out_file == NULL) {
        fclose(in_file);
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(in_file)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, out_file);
    }
    
    fclose(in_file);
    fclose(out_file);
    
    return 0;
}