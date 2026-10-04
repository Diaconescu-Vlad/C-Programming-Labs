#include <stdio.h>
#include <stdlib.h>
int C(double *v, int m){
    for(int i=0;i<m;i++)
        scanf("%lf",&v[i]);
}
int main(){
    int m;
    double *vector;
    scanf("%d",&m);
    vector=(double*)calloc(m,sizeof(double));
    if(vector == NULL){
        printf("Eroare");
    }
    C(vector,m);
    for(int i=0;i<m;i++)
        printf("%lf ",vector[i]);
    free(vector);
}
