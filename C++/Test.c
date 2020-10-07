#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    int result;
    for(i=1;i<=n;i++){
        result+=i;
    }
    printf("%d",result);
}