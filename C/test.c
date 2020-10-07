#include<stdio.h>
int main(){
    printf("Hello world\n");
    int n;
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;i++){
        j+=i;
    }
    printf("%d\n",j);
}