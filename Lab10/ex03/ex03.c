#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,*v;
    int *vtext,*vbinar;
    FILE *f1,*f2;
    
    printf("Introduceti numarul de elemente ");
    scanf("%d",&n);
    
    v=(int*)malloc(n*sizeof(int));
    vtext=(int*)malloc(n*sizeof(int));
    vbinar=(int*)malloc(n*sizeof(int));
    
    printf("Introduceti elementele ");
    
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    
    if((f1=fopen("text.txt","wt+"))==NULL){
        printf("Fisierul text nu s-a deschis\n");
        exit(1);
    }
    
    if((f2=fopen("binar.dat","wb+"))==NULL){
        printf("Fisierul binar nu s-a deschis\n");
        exit(1);
    }
    
    for(i=0;i<n;i++){
        fprintf(f1,"%d ",v[i]);
    }
    fseek(f1,0,SEEK_SET);
    fwrite(v,sizeof(int),n,f2);
    fseek(f2,0,SEEK_SET);
    free(v);

    for(i=0;i<n;i++){
        fscanf(f1,"%d",&vtext[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",vtext[i]);
    }
    printf("\n");
    
    fread(vbinar,sizeof(int),n,f2);
    
    for(i=0;i<n;i++){
        printf("%d ",vbinar[i]);
    }
    
    free(vtext);
    free(vbinar);
    fclose(f1);
    fclose(f2);
}