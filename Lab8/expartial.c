#include <stdio.h>
#include <string.h>

struct programare {
    char nume[50];
    int luna;
    int ziua;
    int ora;
};

void citire(struct programare v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        gets(v[i].nume);
        
        scanf("%d", &v[i].luna);
        
        scanf("%d", &v[i].ziua);
        
        scanf("%d", &v[i].ora);
        getchar(); 
    }
}

int calcul_programari(struct programare v[], int n, int ora, int ziua_cautata) {
    int i, k = 0;
    for(i = 0; i < n; i++)
        if(v[i].ora == ora && v[i].ziua == ziua_cautata)
            k++;
    return k;
}

void client_cu_cele_mai_multe_programari(struct programare v[], int n) {
    int i, j, max_aparitii = 0;
    char nume_top[50];
    
    strcpy(nume_top, v[0].nume);
    
    for(i = 0; i < n; i++) {
        int contor_curent = 0;
        for(j = 0; j < n; j++) {
            if(strcmp(v[i].nume, v[j].nume) == 0) {
                contor_curent++;
            }
        }
        
        if(contor_curent > max_aparitii) {
            max_aparitii = contor_curent;
            strcpy(nume_top, v[i].nume);
        }
    }
}

int verifica_luna(struct programare p, int luna_cautata) {
    if(p.luna == luna_cautata)
        return 1;
    return 0;
}

int main() {
    struct programare v[20];
    int n, ora, ziua, numar_programari, luna, i;
    scanf("%d", &n);
    getchar();
    citire(v, n);
    scanf("%d", &ora);
    scanf("%d", &ziua);
    
    numar_programari = calcul_programari(v, n, ora, ziua);

    client_cu_cele_mai_multe_programari(v, n);
    scanf("%d", &luna);
    printf("Clientii din luna %d sunt:\n", luna);
    int gasit = 0;
    for(i = 0; i < n; i++) {
        if(verifica_luna(v[i], luna) == 1) {
            printf("- %s (Ziua: %d, Ora: %d)\n", v[i].nume, v[i].ziua, v[i].ora);
            gasit = 1;
        }
    }
    if(gasit == 0) 
        printf("Nicio programare in aceasta luna.\n");
}