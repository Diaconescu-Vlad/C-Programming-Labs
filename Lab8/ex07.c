#include <stdio.h>
#include <string.h>
struct autor{
    char nume[50];
    char prenume[50];
    char gen;
};

struct carte{
    char titlu[50];
    int an;
    struct autor a;
};

void citire(struct carte v[], int n){
    int i;
    for(i=0;i<n;i++){
        gets(v[i].titlu);
        scanf("%d",&v[i].an);
        getchar();
        gets(v[i].a.nume);
        gets(v[i].a.prenume);
        scanf("%c",&v[i].a.gen);
        getchar();
    }
}

int gasire(struct carte v[],char nume[],char prenume[],int n,int i){
    if(strcmp(nume,v[i].a.nume)==0 && strcmp(prenume,v[i].a.prenume)==0)
        return 1;
    return 0;
}

int numar_carti(struct carte v[],int n){
    int i,j,k=0,poz=0;
    int max=0;
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<n;j++){
            if(strcmp(v[i].a.nume,v[j].a.nume)==0 && strcmp(v[i].a.prenume,v[j].a.prenume)==0)
                k++;
            }
            if(k>max){
                max=k;
                poz=i;
            }
    }
    return poz;
}

int cauta_gen(struct carte v[],int n,int i,char gen,int an){
    if(v[i].a.gen==gen && v[i].an==an)
        return 1;
    return 0;
}

void ordonare(struct carte v[],int n){
    struct carte a;
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i;j<n;j++)
            if(strcmp(v[i].titlu,v[j].titlu)>0){
                a=v[i];
                v[i]=v[j];
                v[j]=a;
            }
}
int main(){
    struct carte v[10];
    int n,i,an;
    char nume[50],prenume[50],gen;
    scanf("%d",&n);
    getchar();
    citire(v, n);
    gets(nume);
    gets(prenume);
    scanf("%d",&an);
    getchar();
    scanf("%c",&gen);
    getchar();
    for(i=0;i<n;i++)
        if(gasire(v,nume,prenume,n,i)==1){
            printf("%s ",v[i].titlu);
            printf("%c\n",v[i].a.gen);
            printf("%c\n",v[i].an);
        }
    i=numar_carti(v,n);
    printf("%s ",v[i].a.nume);
    printf("%s\n",v[i].a.prenume);
    
    for(i=0;i<n;i++)
        if(cauta_gen(v,n,i,gen,an)==1)
            printf("%s\n",v[i].titlu);
    ordonare(v,n);            
    
}