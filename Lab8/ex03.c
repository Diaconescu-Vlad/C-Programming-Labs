#include <stdio.h>
#include <string.h>
struct informatie{
    char firma[50];
    char produs[50];
    int cantitate;
};

int main(){
    struct informatie v[10];
    char produs_cautat[50], produs_maxim[50];
    int n,i,max=0,s=0,poz=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(v[i].firma);
        gets(v[i].produs);
        scanf("%d",&v[i].cantitate);
        getchar();
    }
    gets(produs_cautat);
    gets(produs_maxim);
    for(i=0;i<n;i++)
        if(max<v[i].cantitate && strcmp(produs_cautat, v[i].produs)==0){
            max=v[i].cantitate;
            poz=i;
        }
    printf("%s\n",v[poz].firma);
    for(i=0;i<n;i++)
        if(strcmp(produs_maxim, v[i].produs)==0){
            s+=v[i].cantitate;
        }
    printf("%d\n",s);
}