#include <stdio.h>

int main(){
    int n, i=0,j=1;
    scanf("%d", &n);
    while(n>0){
        printf("%d ", i);
        printf("%d ", j);
        i=i+j;
        j=i+j;
        n-=2;
    }
}