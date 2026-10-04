#include <stdio.h>
int main(){
    int v[100], k[100];
    int n,i,j,p;
    int l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n-1;i++){
        p=0;
        for(j=i+1;j<n;j++)
            if(v[i]==v[j]){
                p=1;
            }
        if(p==0){
            k[l]=v[i];
            l++;
        }
    }
    p=0;
    for(i=0;i<l;i++)
        if(v[n-1]==k[i])
            p=1;
    if(p==0){
        k[l]=v[n-1];
        l++;
    }
    for(i=0;i<l;i++){
        printf("%d ",k[i]);
    }

}