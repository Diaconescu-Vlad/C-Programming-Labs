#include <stdio.h>
#include <stdlib.h>
int procentStabilitatePuls(int v[],int n){
    int i,k=0;
    for(i=0;i<n-1;i++)
        if(abs(v[i]-v[i+1])>10)
            k++;
    float rez;
    rez=n*1.0/(k-1)*1.0;
    return rez*10;
}
int main(){
    int v[10];
    int n,i,rez;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    rez=procentStabilitatePuls(v,n);
    printf("%d",rez);
}