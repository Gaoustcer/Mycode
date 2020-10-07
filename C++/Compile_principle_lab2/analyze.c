#include<stdio.h>
#include<string.h>
#define MAX 100
#define OTHER 1024
//#define COMPARE 2048
int findchar(char c){
    return (c=='=')?1:((c=='>')?2:((c=='<')?3:0));
}//1 means =,2 means >,3 means <
const char *comparetype(int state){
    switch (state)
    {
    case 2:
        return "<=";
        break;
    case 3:
        return "<>";
        break;
    case 5:
        return "=";
        break;
    case 7:
        return ">=";
        break;
    case 4:
        return "<";
        break;
    case 8:
        return ">";
        break;
    default:
        return "undefined";
        break;
    }
}
int main(){
    char str[100];
    gets(str);
    int state=MAX;
    int i;
    int j=0;
    for(i=0;i<=strlen(str);i++){
        
        if(str[i]=='\n'||str[i]=='\0'){
            switch (state)
            {
            case OTHER:
                printf("(other,%d)",j);
                break;
            case 5:
                printf("(relop,=)");
                break;
            case 2:
                printf("(relop,=)");
                break;
            case 3:
                printf("(relop,<>)");
                break;
            case 4:
                printf("(relop,<)");
                break;
            case 7:
                printf("(relop,>=)");
                break;
            case 8:
                printf("(relop,>)");
                break;
            default:
                break;
            }
            break;
        }
        if(findchar(str[i])==0){
            j++;
            if(state==MAX) ;
            else if(state!=OTHER){
                switch (state)
                {
                case 1:
                    state=4;
                    break;
                case 6:
                    state=8;
                default:
                    break;
                }
                printf("(relop,%s) ",comparetype(state));
            }
            else{
                //state=OTHER;
            }
            state=OTHER;
        }//if the str doesn't belong to > < and =
        else{
            if(state==MAX){
                //state=0;
                j=0;
                state=0;
            }
            else if(state==OTHER){
                printf("(other,%d) ",j);
                state=0;
                j=0;
            }
            state=0;
            switch (findchar(str[i]))
            {
            case 1://=
                {
                    switch (state)
                    {
                    case 1:
                        state=2;
                        break;
                    case 6:
                        state=7;
                        break;
                    case 0:
                        state=5;
                    default:
                        break;
                    }
                }
                break;
            case 2://>
                {
                    switch (state)
                    {
                    case 1:
                        state=3;
                        break;
                    case 6:
                        state=8;
                        break;
                    case 0:
                        state=6;
                    default:
                        break;
                    }
                }
            case 3://<
                {
                    switch (state)
                    {
                    case 1:
                        state=4;
                        break;
                    case 6:
                        state=8;
                        break;
                    case 0:
                        state=1;
                    default:
                        break;
                    }
                }
            default:
                break;
            }
        }
    }
}