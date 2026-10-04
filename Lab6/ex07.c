#include <stdio.h>
void C(int v[],int par[],int imp[],int n,int *p,int *im){
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            par[*p]=v[i];
            (*p)++;
        }
        else{
            imp[*im]=v[i];
            (*im)++;
        }
    }
}
int main(){
    int v[10],imp[10],par[10],n;
    int p=0,im=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    C(v,par,imp,n,&p,&im);
    for(int i=0;i<im;i++)
        printf("%d ",imp[i]);
    printf("\n");
    for(int i=0;i<p;i++)
        printf("%d ",par[i]);
}