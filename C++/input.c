#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[1000];
    int i;
    char c;
    c=getchar();
    i=0;
    while(1){
        scanf("%d",a+i);
        c=getchar();
        if(c=='\n')
            break;
        else{
            i++;
        }

    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}