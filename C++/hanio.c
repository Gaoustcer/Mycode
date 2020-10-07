#include<stdio.h>
void hanio(int n,char a,char b,char c){
    if(n==1){
        printf("%c->%c\n",a,c);
        return ;
    }
    else{
        hanio(n-1,a,c,b);
        printf("%c->%c\n",a,c);
        hanio(n-1,b,a,c);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hanio(n,'a','c','b');
}