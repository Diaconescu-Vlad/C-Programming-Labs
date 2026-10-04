#include <stdio.h>
int main(){
    int v[100],n,k;
    int cop,i=0;
    scanf("%d",&n);
    cop=n;
    while(cop!=0){
        scanf("%d",&v[i]);
        if(i>0 && v[i-1]>v[i]){
            printf("Numerele nu sunt ordonate crescator");
            return 0;
        }
        i++;
        cop--;
    }
    scanf ("%d",&k);
    for(i=0;i<n;i++)
        if(k>v[i]&& k<v[i+1]){
        n++;
            for(int j=n-1;j>i;j--)
                v[j+1]=v[j];
        v[i+1]=k;
        }
    for(i=0;i<n;i++)
        printf("%d ",v[i]);       

}