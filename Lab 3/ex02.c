#include <stdio.h>

int main(){
    int v[100],par[100],imp[100];
    int n,k=0,l=0,i;
    printf("Introduceti numarul de variabile ");
    scanf("%d",&n);
    printf("Introduceti variabilele\n");
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        if(v[i]%2==0){
            par[k]=v[i];
            k++;
        }
        else{
            imp[l]=v[i];
            l++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ", par[i]);
    printf("\n");
    for(i=0;i<l;i++)
        printf("%d ", imp[i]);
}