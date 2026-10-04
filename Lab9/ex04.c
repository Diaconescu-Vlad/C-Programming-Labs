#include <stdio.h>
#include <stdlib.h>

typedef struct numar {
    int nr;
    struct numar *urm;
} NR;

NR* citire() {
    NR *cap = NULL, *p, *q;
    int nr, i;
    
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &nr);
    
    if (nr == 0)
        return NULL;
        
    printf("Introduceti elementele: ");
    p = (NR*)malloc(sizeof(NR));
    if (p == NULL) {
        printf("Eroare alocare");
        exit(1);
    }
    
    scanf("%d", &p->nr); 
    
    p->urm = NULL;
    cap = p;
    
    for (i = 2; i <= nr; i++) {
        q = (NR*)malloc(sizeof(NR));
        if (q == NULL) {
            printf("Eroare alocare");
            exit(1);
        }
        scanf("%d", &q->nr);
        
        q->urm = NULL;
        p->urm = q;
        p = q;
    }
    return cap;
}

void afisare(NR* cap) {
    NR *p;
    if (cap == NULL) {
        printf("Lista este nula\n"); 
        return;
    }
    printf("Lista: ");
    for (p = cap; p != NULL; p = p->urm) {
        printf("%d ", p->nr);
    }
    printf("\n");
}

void sterge_6(NR *cap) {
    NR *p, *temp;
    
    if (cap == NULL) {
        printf("Lista nula\n");
        return;
    }

    
    if (cap->nr == 6) {
        printf("Elementul 6 a fost gasit pe prima pozitie -> Nu trebuie sters.\n");
        return; 
    }

    p = cap;
    // Cautam in restul listei
    while (p->urm != NULL) {
        if (p->urm->nr == 6) {
            temp = p->urm;
            p->urm = temp->urm; 
            free(temp);         
            printf("Elementul 6 a fost gasit si sters.\n");
            return; 
        }
        p = p->urm;
    }
    
    printf("Elementul 6 nu a fost gasit in restul listei.\n");
}

void inserare_p3(NR *cap) {
    NR *p = cap, *nou;
    int val_nou;

    if (cap == NULL || cap->urm == NULL) {
        printf("Lista nu are destule elemente (minim 2 necesare) pentru inserare pe poz 3.\n");
        return;
    }

    p = p->urm; 

    printf("Introduceti valoarea pe care doriti sa o inserati: ");
    scanf("%d", &val_nou);

    nou = (NR*)malloc(sizeof(NR));
    nou->nr = val_nou;
    nou->urm = p->urm;
    p->urm = nou;
    
    printf("Inserat cu succes.\n");
}

int main() {
    NR *lista;
    
    lista = citire();
    afisare(lista);
    
    sterge_6(lista);
    afisare(lista);
    
    inserare_p3(lista);
    afisare(lista);
    
    return 0;
}