#include <stdio.h>
int main(){
    int a[10][10];
    int n,m,i,j,aux,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i+=2){
        for(j=0;j<m-1;j++)
            for(k=j+1;k<m;k++)
                if(a[i][j]>a[i][k] && a[i][j]%2==0 && a[i][k]%2==0){
                    aux=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=aux;
                }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}   