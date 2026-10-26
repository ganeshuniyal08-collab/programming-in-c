//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>
int main() {
    char s[10000];
    scanf("%s", s);
    int last_pos[256];
    for (int i = 0; i < 256; i++) {
        last_pos[i] = -1;
    }    
    int max_len = 0;
    int start = 0;    
    for (int end = 0; s[end] != '\0'; end++) {
        int char_idx = (unsigned char)s[end];
        if (last_pos[char_idx] >= start) {
            start = last_pos[char_idx] + 1;
        }        
        last_pos[char_idx] = end;        
        int current_len = end - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }    
    printf("%d\n", max_len);    
    return 0;
}