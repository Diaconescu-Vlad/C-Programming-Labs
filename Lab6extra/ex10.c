#include <stdio.h>
int Trafic(int v[],int *poz,int trf,int n){
    int i,max=0,k=1;
    for(i=0;i<n;i++)
        if(v[i]>trf){
            k++;
        }
        if(k>max){
            max=k-1;
            *poz=i-k-2;
        }
        else
            k=0;
    return max;
}
int main(){
    int v[10];
    int i,max,poz=0,trf,n,secv;
    scanf("%d",&trf);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    secv=Trafic(v,&poz,trf,n);
    printf("%d\n",secv);
    printf("%d",poz);
}