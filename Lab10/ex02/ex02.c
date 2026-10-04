#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char buffer[256],c,cuv_cautat[20];
    int nr_linie;
    FILE *f1;
    if((f1=fopen("text.txt","wt"))==NULL){
        printf("Eroare la deschidera fisierului\n");
        exit(1);
    }
    printf("Introduceti mai multe propozitii. Tastati 'STOP' pe o noua linie pentru a incheia\n");
    while(1){
        printf(">>");
        gets(buffer);
        if(strcmp(buffer,"STOP")==0)
            break;
        fputs(buffer,f1);
        fputs("\n",f1);
    }
    fclose(f1);

    if((f1=fopen("text.txt","rt"))==NULL){
        printf("Eroare la deschiderea fisierului\n");
        exit(1);
    }
    while((c=getc(f1))!=EOF){
        putchar(c);
    }
    rewind(f1);
    printf("Introduceti cuvantul pe care doriti sa il cautati in text ");
    gets(cuv_cautat);
    nr_linie=1;
    while(fgets(buffer,sizeof(buffer),f1)!=NULL){
        if(strstr(buffer,cuv_cautat)!=NULL){
            printf("Cuvantul cautat apare pe linia: %d\n",nr_linie);
        }
        nr_linie++;
    }
    rewind(f1);
}