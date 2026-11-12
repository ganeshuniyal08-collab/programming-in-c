    //Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

    /*
    Sample Test Cases:
    Input 1:
    ADD 10 20
    Output 1:
    30

    */
    #include <string.h>
    #include <stdio.h>
    enum menu{
        ADD,
        SUBTRACT,
        MULTIPLY
    };
    int main(){
        char opp[10];
        int num1,num2;
        scanf("%s %d %d", opp, &num1, &num2);
        enum menu a;
        if(strcmp(opp,"ADD")==0){
            a=ADD;
        }
        else if(strcmp(opp,"SUBTRACT")==0){
            a=SUBTRACT;
        }
        else if(strcmp(opp,"MULTIPLY")==0){
            a=MULTIPLY;
        }
    switch(a){
        case ADD:
            printf("%d",num1+num2);
            break;
        case SUBTRACT:
            printf("%d",num1-num2);
            break;
        case MULTIPLY:
            printf("%d",num1*num2);
            break;
    }
        return 0;
    }