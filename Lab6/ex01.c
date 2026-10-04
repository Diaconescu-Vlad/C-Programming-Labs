#include <stdio.h>
void C(int v[],int n,int *c){
    int i;
    for(i=0;i<n-1;i++)
        if(v[i]==v[i+1])
            (*c)++;
}

int main(){
    int v[10],i,n;
    int c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    C(v,n,&c);
    printf("%d",c);
}