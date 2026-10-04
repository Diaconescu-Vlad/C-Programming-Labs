#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct cuvinte{
    char cuv[15];
    struct cuvinte *urm;
} CUVANT;

CUVANT* citire(){
    CUVANT *cap=NULL,*p,*q;
    int i,nr;
    printf("Introduceti numarul de cuvinte ");
    scanf("%d",&nr);
    if(nr==0)
        return NULL;
    printf("Introduceti cuvintele ");
    p=(CUVANT*)malloc(sizeof(CUVANT));
    if(p==NULL)
        printf("Eroare la alocarea dinamica");
    scanf("%s",p->cuv);
    p->urm=NULL;
    cap=p;
    for(i=2;i<=nr;i++){
        q=(CUVANT*)malloc(sizeof(CUVANT));
        if(q==NULL)
            printf("Eroare la alocarea dinamica");
        scanf("%s",q->cuv);
        p->urm=q;
        p=q;
        q->urm=NULL;
    }
    p->urm=NULL;
    return cap;
}
void rez(CUVANT* cap){
    CUVANT *p;
    char fraza[1000]="";
    if(cap==NULL){
        printf("Lista este goala!\n");
        return;
    }
    for(p=cap;p!=NULL;p=p->urm){
        printf("Cuvant: %s| Adresa urmatorului nod: %p\n",p->cuv,p->urm);
        strcat(fraza,p->cuv);
        strcat(fraza, " ");
    }
    printf("Fraza finala: ");
    printf("%s\n",fraza);
}
int main(){
    CUVANT *lista;
    lista=citire();
    rez(lista);
    return 0;
}

