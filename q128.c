//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
int main(){
 int vowels=0,consonants=0;
 char v[10]={'A','a','E','e','I','i','O','o','U','u'};
  FILE *in_file = fopen("text.txt", "r");
    if (in_file == NULL) {
        return 1;
    }
    
    int ch,i;
    while ((ch = fgetc(in_file)) != EOF){
        int x=0;
        if(ch>='a' && ch<='z'){
            for(i=0;i<10;i++){        
                if (v[i]==ch) {
                    x=1;
                    break;
                }
            }
            if (x==1){
                vowels++;
            }
            else{
                    consonants++;
            }
        }
        else if(ch>='A' && ch<='Z'){
            for(i=0;i<10;i++){        
                if (v[i]==ch) {
                    x=1;
                    break;
                }
            }
            if (x==1){
                vowels++;
            }
            else{
                    consonants++;
            }
        }
    }
    
    fclose(in_file);
    printf("Vowels:%d\n",vowels);
    printf("Consonant:%d",consonants);
    
    return 0;
} 