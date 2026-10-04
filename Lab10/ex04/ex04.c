#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct persoana
{
    char nume[20];
    char prenume[20];
    float varsta;
} PERS;
int main()
{
    PERS *v, *vtxt, *vbin;
    FILE *f1, *f2;
    int nr, i;
    printf("Introduceti numarul de persoane\n");
    scanf("%d", &nr);
    v = (PERS *)malloc(nr * sizeof(PERS));
    vtxt = (PERS *)malloc(nr * sizeof(PERS));
    vbin = (PERS *)malloc(nr * sizeof(PERS));
    if (v == NULL)
    {
        printf("Eroare la alocarea dinamica");
        exit(1);
    }
    printf("Introduceti numele prenumele si varsta persoanelor\n");
    for (i = 0; i < nr; i++)
    {
        getchar();
        scanf("%s", v[i].nume);
        scanf("%s", v[i].prenume);
        scanf("%f", &v[i].varsta);
    }
    if ((f1 = fopen("text.txt", "wt")) == NULL)
    {
        printf("Eroare la deschiderea fisierului ");
        exit(1);
    }
    if ((f2 = fopen("binar.dat", "wb")) == NULL)
    {
        printf("Eroarea la deschiderea fisierului ");
        exit(1);
    }
    for (i = 0; i < nr; i++)
    {
        fprintf(f1, "%s ", v[i].nume);
        fprintf(f1, "%s ", v[i].prenume);
        fprintf(f1, "%.0f\n", v[i].varsta);
    }
    fwrite(v, sizeof(PERS), nr, f2);
    fclose(f1);
    fclose(f2);
    free(v);
    if ((f1 = fopen("text.txt", "rt")) == NULL)
    {
        printf("Eroare la deschiderea fisierului ");
        exit(1);
    }
    for (i = 0; i < nr; i++)
    {
        fscanf(f1, "%s", vtxt[i].nume);
        fscanf(f1, "%s", vtxt[i].prenume);
        fscanf(f1, "%f", &vtxt[i].varsta);
    }
    fclose(f1);
    if ((f2 = fopen("binar.dat", "rb")) == NULL)
    {
        printf("Eroare la deschiderea fisierului ");
        exit(1);
    }
    fread(vbin, sizeof(PERS), nr, f2);
    fclose(f2);
    printf("Fisier Texr:\n");
    for (i = 0; i < nr; i++)
    {
        printf("%s %s %.0f\n", vtxt[i].nume, vtxt[i].prenume, vtxt[i].varsta);
    }
    printf("Fisier Binar:\n");
    for (i = 0; i < nr; i++)
    {
        printf("%s %s %.0f\n", vbin[i].nume, vbin[i].prenume, vbin[i].varsta);
    }
    free(vbin);
    vbin=(PERS*)malloc(sizeof(PERS));
    if(vbin==NULL){
        printf("Eroare la aloacarea dinamica");
        exit(1);
    }
    printf("Introduceti o noua persoana\n");
    getchar();
    scanf("%s",vbin->nume);
    scanf("%s",vbin->prenume);
    scanf("%f",&vbin->varsta);
    int check=0;
    for(i=0;i<nr;i++){
        if(strcmp(vbin->nume,vtxt[i].nume)==0 && strcmp(vbin->prenume,vtxt[i].prenume)==0 && vbin->varsta==vtxt[i].varsta && check==0){
            check=1;
        }
    }
    if(check==1){
        printf("Persoana exista deja\n");
    }
    else{
        if((f1=fopen("text.txt","at"))==NULL){
        printf("Eroare la deschiderea fisierului");
        exit(1);
        }
        fprintf(f1, "%s %s %.0f\n", vbin->nume, vbin->prenume, vbin->varsta);
        fclose(f1);
    }
    if((f2=fopen("binar.dat","wb"))==NULL){
        printf("Eroare la deschidera fisierului");
        exit(1);
    }
    
}