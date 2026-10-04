#include <stdio.h>
int main(){
    int v[100];
    int n,j,i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(v[i]==v[j])
                k++;
        }
    }
    if(k==0)
        printf("Toate numerele sunt diferite");
    else
        printf("Nu toate nuemerele sunt diferite");
}