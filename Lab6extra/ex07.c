#include <stdio.h>
int Note(int v[],int p[],int s[],int n,int prag){
    int i,k=0,m=0;
    for(i=0;i<n;i++)
        if(v[i]<prag){
            s[k]=v[i];
            k++;
        }
        else{
            p[m]=v[i];
            m++;
        }
        return k;
}
int main(){
    int v[10],p[10],s[10];
    int i,n,prag,k,m;
    scanf("%d",&prag);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    k=Note(v,p,s,n,prag);
    m=n-k;
    for(i=0;i<k;i++)
        printf("%d ",s[i]);
    printf("\n");
    for(i=0;i<m;i++)
        printf("%d ",p[i]);
}