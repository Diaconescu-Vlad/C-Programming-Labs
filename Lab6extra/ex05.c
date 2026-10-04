#include <stdio.h>
void C(int v[],int n,int *week,int *endd){
    int i;
    *week = 0;
    for(i=0;i<5;i++){
        *week+=v[i];
    }
    *endd=v[5]+v[6];
}
int main(){
    int v[10];
    int n,i,week,endd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    C(v,n,&week,&endd);
    printf("%d %d",week,endd);
}