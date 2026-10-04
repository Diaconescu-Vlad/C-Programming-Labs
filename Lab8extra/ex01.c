#include <stdio.h>
struct lista{
    int nr;
    float nota;
};
int ordonare(struct lista v[100],int n){
        int i,maxi=0;
        float max=v[0].nota;
        for(i=0;i<n;i++){
            if (v[i].nota>max){
                max=v[i].nota;
                maxi=i;
            }
        }
        return maxi;
}
int main(){
    struct lista v[100];
    int n,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i].nr);
        scanf("%f",&v[i].nota);
    }
    max=ordonare(v,n);
    printf("%d",v[max].nr);
}