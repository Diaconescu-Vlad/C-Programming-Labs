#include <stdio.h>
int Raspunsuri(int v[],int n,int *med, int poz[]){
    int i,k=0,s=0;
    for(i=0;i<n;i++)
        s+=v[i];
    s/=n;
    *med=s;
    for(i=0;i<n;i++)
        if(v[i]>s){
            poz[k]=i;
            k++;
        }
    return k;
    
}
int main(){
    int v[10],poz[10];
    int n,m,i,medie=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    m=Raspunsuri(v,n,&medie,poz);
    for(i=0;i<m;i++)
        printf("%d ",poz[i]);
    printf("\n");
    printf("%d\n",m);
    printf("%d",medie);
}