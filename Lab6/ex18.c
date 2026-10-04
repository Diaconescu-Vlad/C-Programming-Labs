#include <stdio.h>
#include <stdlib.h>
void Citire(int *v, int n){
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
}
int* RealocareSiDimensiune(int *v_mare,int n_mare,int *v_mic,int n_mic){
    int dim=n_mic+n_mare;
    int *temp=realloc(v_mare,dim*sizeof(int));
    if(temp==NULL)
        printf("Eroare");
    v_mare=temp;
    for(int i=0;i<n_mic;i++)
        v_mare[n_mare+i]=v_mic[i];
    return v_mare;
}
int main(){
    int n1,n2,dim;
    int *v1,*v2;
    scanf("%d",&n1);
    v1=malloc(n1 *sizeof(int));
    Citire(v1,n1);
    scanf("%d",&n2);
    v2=malloc(n2 *sizeof(int));
    Citire(v2,n2);
    dim=n1+n2;
    if(n1>=n2){
        v1=RealocareSiDimensiune(v1,n1,v2,n2);
        for(int i=0;i<dim;i++)\
            printf("%d",v1[i]);
    }
    else{
        v2=RealocareSiDimensiune(v2,n2,v1,n1);
        for(int i=0;i<dim;i++)
            printf("%d ",v2[i]);
    }
}