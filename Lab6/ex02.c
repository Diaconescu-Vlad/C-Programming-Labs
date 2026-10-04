#include <stdio.h>
void C(int v[],int n, int *c){
    int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]%2!=0 && v[i]>max)
            max=v[i];
    }
    *c=max;
}
int main(){
    int v[10],n,i,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&v[i]);
        C(v,n,&c);
        printf("%d",c);
}