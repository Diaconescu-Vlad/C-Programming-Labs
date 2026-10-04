#include <stido.h>
int main(){
    int v[100];
    int n, p
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    aux=v[i];
    v[i]=v[n-1];
    v[n-1]=v[i];
    for(i=1;i<n-1;i++)
        aux=v[i+1];
        v[i]=v[i+1];
    
}