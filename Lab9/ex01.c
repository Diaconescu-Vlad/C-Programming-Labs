#include <stdio.h>
#include <stdlib.h>
typedef struct element{
    int val;
    struct element *urm;
} ELEM;

ELEM* citire(){
    ELEM *cap=NULL,*p,*q;
    int i,nr;
    printf("Introduceti numarul de elemente ");
    scanf("%d",&nr);
    if(nr==0)
        return NULL;
    printf("Tastati valoarea primului element ");
    p=(ELEM*)malloc(sizeof(ELEM));
    if(p==NULL){
        printf("Eroare la alocarea dinamica");
        exit(1);
    }
    scanf("%d",&p->val);
    p->urm=NULL;
    cap=p;
    for(i=2;i<=nr;i++){
        q=(ELEM*)malloc(sizeof(ELEM));
        if(q==NULL){
            printf("Eroare la alocarea dinamica");
            exit(1);
        }
        scanf("%d",&q->val);
        q->urm=NULL;
        p->urm=q;
        p=q;
    }
    return cap;
}
void afisare(ELEM* cap){
    ELEM *p;
    if(cap==NULL){
        printf("Lista vida\n");
        return;
    }
    for(p=cap;p!=NULL;p=p->urm){
        printf("%d ",p->val);
    }
    printf("\n");
}
ELEM* elim_pare(ELEM* cap){
    ELEM *p,*de_sters;
    while(cap!=NULL && cap->val%2==0){
        de_sters=cap;
        cap=cap->urm;
        free(de_sters);
    }
    p=cap;
    while(p!=NULL && p->urm!=NULL){
        if(p->urm->val%2==0){
            de_sters=p->urm;
            p->urm=de_sters->urm;
            free(de_sters);
        }
        else{
            p=p->urm;
        }
    }
    return cap;
}
int main(){
    ELEM *lista;
    lista=citire();
    lista=elim_pare(lista);
    afisare(lista);
}