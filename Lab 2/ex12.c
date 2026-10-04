#include <stdio.h>

int main()
{
    int n,i,j,k=1;
    printf("Introduceti un numar ");
    scanf("%d",&n);
    while(k<=n){
        for(i=1;i<=k;i++){
            for(j=1;j<=k;j++)
                printf("%d ",k);
            printf("\n");
        }
        k++;
    }
    return 0;
}