#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct persoane{
    char nume[50];
    int varsta;
    struct persoane *urm;
} PERS;

PERS* citire(){
    PERS *cap=NULL,*p,*q;
    int i,nr;
    printf("Introduceti numarul de oameni ");
    scanf("%d",&nr);
    if(nr==0)
        return NULL;
    p=(PERS*)malloc(sizeof(PERS));
    if(p==NULL){
        printf("Eroare la alocarea dinamica");
        exit(1);
    }
    printf("Introduceti datele primei persoane (varsta nume) ");
    scanf("%d",&p->varsta);
    scanf("%s",p->nume);
    cap=p;
    for(i=2;i<=nr;i++){
        q=(PERS*)malloc(sizeof(PERS));
        if(q==NULL){
            printf("Eroare la alocarea dinamica");
            exit(1);
        }
        scanf("%d",&q->varsta);
        scanf("%s",q->nume);
        q->urm=NULL;
        p->urm=q;
        p=q;
    }
    return cap;
}
void gasire(PERS* cap){
    PERS *p;
    if(cap==NULL){
        printf("Lista vida\n");
        return;
    }
    for(p=cap;p!=NULL;p=p->urm){
        if(strcmp(p->nume, "George")==0 && p->varsta==19){
            if(p->urm!=NULL){
                if(p->urm->varsta < p->varsta){
                    printf("George (19 ani) gasit, iar urmatorul e mai tanar.\n");
                    return;
                }
                else{
                    printf("George (19 ani) gasit, dar urmatorul NU e mai tanar.\n");
                    return;
                }
            }
            else{
                printf("George este ultimul din lista");
                return;
            }
        }
    }
    printf("Pe George ori nu-l cheama George ori nu are 19 ani");
    printf("\n");
}
int main(){
    PERS *lista;
    lista=citire();
    gasire(lista);
}