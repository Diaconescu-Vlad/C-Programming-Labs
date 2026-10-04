#include <stdio.h>
#include <limits.h>
int main(){
    int a[30][30],n;
    int i,j,max=0,min=INT_MAX;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(a[i][j]<min)
                min=a[i][j];
            if(a[i][j]>max)
                max=a[i][j];
        }
    printf("%d %d\n",max, min);
    printf("\n");
    for(i=0;i<n;i++)
        a[i][i]=max;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    int k=1;
    for(i=1;i<n;i++){
        for(j=n-1;j>n-k-1;j--)
            a[i][j]=min;
        k++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}