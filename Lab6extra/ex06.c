#include <stdio.h>
int Timp(int v[],int b[],int n,int Tmax){
    int i,k=0,timp=0;
    for(i=0;i<n;i++)
        if(v[i]+timp<=Tmax){
            b[k]=v[i];
            timp+=v[i];
            k++;
        }
    return k;
}
int main(){
    int v[10],b[10];
    int n,i,m,Tmax;
    scanf("%d",&Tmax);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    m=Timp(v,b,n,Tmax);
    if(m==0)
        printf("Nu s-a putut rezolva nici o sarcina");
    else
        for(i=0;i<m;i++)
            printf("%d ",b[i]);
}