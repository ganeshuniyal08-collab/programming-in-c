//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source[100], destination[100];
    
    if (scanf("%99s", source) != 1) {
        return 1;
    }
    if (scanf("%99s", destination) != 1) {
        return 1;
    }
    
    FILE *src_file = fopen(source, "r");
    if (src_file == NULL) {
        return 1;
    }
    
    FILE *dest_file = fopen(destination, "w");
    if (dest_file == NULL) {
        fclose(src_file);
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(src_file)) != EOF) {
        fputc(ch, dest_file);
    }
    
    fclose(src_file);
    fclose(dest_file);
    
    printf("File copied successfully to %s\n", destination);
    
    return 0;
}