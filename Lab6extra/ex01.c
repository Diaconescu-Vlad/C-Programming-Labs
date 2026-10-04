#include <stdio.h>
int C(int v[],int n,int b){
    int i,s=0;
    for(i=0;i<n;i++){
        s=s+v[i];
        if(s>b)
            return i+1;
    }
    return -1;
}
int main(){
    int v[10];
    int n,i,b;
    float rez;
    scanf("%d",&b);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    rez=C(v,n,b);
    if(rez>0)
        printf("%fl",rez);
    else
        printf("Nu s-a depasit bugetul");
}