#include <stdio.h>
int main(){
    int v[100];
    int n, i, k=1,max=0,poz;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        k=1;
        while(v[i]<v[i+1]){
            k++;
            i++;
        }
        i=i-k+1;
        if(max<k){
            max=k;
            poz=i;
        }
        
    }
    printf("%d\n",max);
    for(i=poz;i<max;i++)
        printf("%d ",v[i]);
}