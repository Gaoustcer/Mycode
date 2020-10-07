//author Haihan Gao submit time 1
#include<stdio.h>
#include<string.h>
#define MAX 1000
#define OTHER 1024
//#define COMPARE 2048
int findchar(char c){
    return (c=='=')?1:((c=='>')?2:((c=='<')?3:0));
}//1 means =,2 means >,3 means <
int main(){
    char str[MAX];
    int state=0;
    gets(str);
    int i;
    int j=0;
    for(i=0;i<strlen(str);i++){
        switch (state)
        {
        case 2:
            printf("(relop,<=)");
            state=0;
            break;
        case 3:
            printf("(relop,<>)");
            state=0;
            break;
        case 4:
            printf("(relop,<)");
            state=0;
            break;
        case 5:
            printf("(relop,=)");
            state=0;
            break;
        case 7:
            printf("(relop,>=)");
            state=0;
            break;
        case 8:
            printf("(relop,>)");
            state=0;
            break;
        case 9:
            if(findchar(str[i])!=0)
                printf("(other,%d)",j);
                state=0;
            break;
        default:
            break;
        }
        if(state==0){
            switch (findchar(str[i]))
            {
            case 1:
                state=5;
                j=0;
                break;
            case 2:
                state=6;
                j=0;
                break;
            case 3:
                state=1;
                j=0;
                break;
            default:
                state=9;
                j++;
                break;
            }
        }
        else if(state==1){
            switch (findchar(str[i]))
            {
            case 1:
                state=2;
                j=0;
                break;
            case 2:
                state=3;
                j=0;
                break;
            case 3:
                state=4;
                if(i!=0){
                    i--;
                }
                j=0;
                break;
            default:
                printf("(relop,<)");
                state=9;
                j++;
                break;
            }
        }
        else if(state==6){
            switch (findchar(str[i]))
            {
            case 1:
                state=7;
                j=0;
                break;
            case 2:
                state=8;
                if(i!=0){
                    i--;
                }
                j=0;
                break;
            case 3:
                state=8;
                if(i!=0){
                    i--;
                }
                j=0;
                break;
            default:
                printf("(relop,>)");
                state=9;
                j++;
                break;
            }
        }
        else if(state==9){
            switch (findchar(str[i]))
            {
            case 0:
                state==9;
                j++;
                break;
            case 1:
                printf("(other,%d)",j);
                state=5;
                j=0;
                break;
            case 2:
                printf("(other,%d)",j);
                state=6;
                j=0;
                break;
            case 3:
                printf("(other,%d)",j);
                state=1;
                j=0;
                break;
            default:
                break;
            }
        }
        }
        switch (state)
        {
        case 1:
            printf("(relop,<)");
            break;
        case 6:
            printf("(relop,>)");
            break;
        case 2:
            printf("(relop,<=)");
            break;
        case 3:
            printf("(relop,<>)");
            break;
        case 4:
            printf("(relop,<)");
            printf("(other,%d)",j);
            break;
        case 5:
            printf("(relop,=)");
            break;
        case 7:
            printf("(relop,>=)");
            break;
        case 8:
            printf("(relop,>)");
            printf("(other,%d)",j);
            break;
        case 9:            
            printf("(other,%d)",j);
            break;
        default:
            break;
        }
}
