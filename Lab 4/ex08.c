#include <stdio.h>
int main(){
    int v[10][10],n,s[100];
    int i,j,k=0,min,max=0,pimin,pimax,pjmin,pjmax,aux,sem=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&v[i][j]);
    min=v[0][0];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(v[i][j]>max){
                max=v[i][j];
                pimax=i;
                pjmax=j;
            }
            if(v[i][j]<min){
                min=v[i][j];
                pimin=i;
                pjmin=j;
            }
        }
    /*printf("\n%d %d\n",pimin,pjmin);
    printf("\n%d %d\n",pjmax,pjmax);
    printf("\n%d %d\n",min,max);*/
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==pimin && j==pjmin || sem==0){
                s[k]=v[i][j];
                k++;
                sem=0;
                if(i==pimax && j==pjmax)
                    sem=1;
            }
        }
    for(i=0;i<k-1;i++)
        for(j=i+1;j<k;j++)
            if(s[i]>s[j]){
                aux=s[i];
                s[i]=s[j];
                s[j]=aux;
            }
    /*for(i=0;i<k;i++)
        printf("%d ",s[i]);*/
    k=0;
     for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==pimin && j==pjmin || sem==0){
                v[i][j]=s[k];
                k++;
                sem=0;
                if(i==pimax && j==pjmax)
                    sem=1;
            }
        }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",v[i][j]);
        printf("\n");
    }
}