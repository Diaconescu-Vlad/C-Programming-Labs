#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    while(n>0){
        if(n%2==0){
        n=n-2;
        printf("%d ",n);
        }
        else{
            n=n-1;
            printf("%d ",n);
            n--;
        }
    }
}