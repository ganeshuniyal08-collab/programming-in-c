//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main(){
    char str1[1000];
    char str2[1000];
    char a[1000];
    char b[1000];
    int c[26]={0};
    int d=0;
    if(fgets(str1, sizeof (str1),stdin)!=NULL){
        if(fgets(str2, sizeof (str2),stdin)!=NULL){
            for(int i=0; str1[i]!=0; i++){
                if(str1[i] >= 'a' && str1[i] <= 'z'){
                c[str1[i]-'a']++;
                }
            }
            for(int j=0; str2[j]!=0; j++){
                if(str2[j] >= 'a' && str2[j] <= 'z'){
                c[str2[j]-'a']--;
                }
            } 
            for (int x=0;x<26;x++){
                if(c[x]!=0){
                    d=1;
                }
        }
        if(d==0){
                printf("Anagrams");
            }
            else{
                printf("Not anagrams");
            }
    }
    return 0;
}
}