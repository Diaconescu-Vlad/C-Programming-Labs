#include <stdio.h>
int durataMaximaCongestia(int v[],int dim,int lim){
    int i=0;int max=0;int k=0;
    for(i=0;i<dim;i++){
        if(v[i]>lim){
            k++;
            if(k>max)
                max=k;
        }
        else
            k=0;
    }
    return max;
}
int main(){
    int v[10];
    int n,lim,durata,i;
    scanf("%d",&lim);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    durata=durataMaximaCongestia(v,n,lim);
    printf("%d",durata);
}