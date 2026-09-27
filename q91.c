//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
int main(){
    char str[1000];
    char nstr[1000];
    int x=0;
    if(fgets(str,sizeof(str),stdin)!=NULL)
    for(int i=0;str[i]!=0;i++){
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u' && str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U'){
            nstr[x]=str[i];
            x++;
            }
        }
        nstr[x] = '\0';
    printf("%s", nstr);
    return 0;
}