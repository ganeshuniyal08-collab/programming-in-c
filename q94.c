#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    char current[1000];
    char longest[1000];
    
    int c_len = 0;
    int max_len = 0;

    if(fgets(str, sizeof(str), stdin) != NULL){
        for(int i = 0; str[i] != 0; i++){
            
            if(str[i] != ' ' && str[i] != '\n'){
                current[c_len] = str[i];
                c_len++;
            }
            else if(c_len > 0){
                current[c_len] = '\0';
                
                if (c_len > max_len) {
                    max_len = c_len;
                    strcpy(longest, current);
                }
                
                c_len = 0;
            }
        }
        
        printf("%s", longest);
    }
    return 0;
}