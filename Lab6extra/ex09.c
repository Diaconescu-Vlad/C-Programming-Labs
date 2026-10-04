#include <stdio.h>
int binar(int v[],int lung[],int n){
    int i,k=1,j=0;
    for(i=0;i<n;i++){
        if(v[i]==v[i+1]){
            k++;
        }
        else{
        v[j]=v[i];
        lung[j]=k;
        j++;
        k=1;
        }
    }
    return j;
}
int main(){
    int secv[10],lung[10];
    int i, nr_secv,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&secv[i]);
    nr_secv=binar(secv,lung,n);
    for(i=0;i<nr_secv;i++)
        printf("%d ",secv[i]);
    printf("\n");
    for(i=0;i<nr_secv;i++)
        printf("%d ",lung[i]);
    printf("\n");
    printf("%d",nr_secv);
}