#include <stdio.h>
int main(){
    int v[100],poz[100],neg[100];
    int n,i,max=0,maxn=0,nr,nrn;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        poz[i]=0;
        neg[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        if(v[i]<0)
        neg[v[i]*(-1)]++;
        else
        poz[v[i]]++;
    }
    for(i=0;i<100;i++)
        if(neg[i]>max){
            maxn=i;
            nrn=neg[i];
        }
    for(i=0;i<100;i++)
        if(poz[i]>max){
            max=i;
            nr=poz[i];
        }
        prinf("%d",max);
    if(nrn==nr){
        printf("%d",(-1)*maxn);
        printf("\n");
        printf("%d",max);
    }
    if(nrn>nr){
        printf("%d",(-1)*maxn);
    }
    else
        printf("%d",max);
}