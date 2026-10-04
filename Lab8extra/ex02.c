#include <stdio.h>
struct informatii{
    int codfirma;
    int codprodus;
    int cantitate;

};
int listafirme(struct informatii v[],int n, int x){
        int i,max=v[0].cantitate,cnt=0;
        for(i=0;i<n;i++)
            if(v[i].codprodus==x && v[i].cantitate>max)
                max=v[i].cantitate;
        for(i=0;i<n;i++)
            if(v[i].cantitate==max && v[i].codprodus==x)
                cnt++;
        return cnt;
}
int main(){
    struct informatii v[30];
    int n,i,x,nr=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++){
        scanf("%d",&v[i].codfirma);
        scanf("%d",&v[i].codprodus);
        scanf("%d",&v[i].cantitate);
    }
    nr=listafirme(v,n,x);
    printf("%d",nr);
}