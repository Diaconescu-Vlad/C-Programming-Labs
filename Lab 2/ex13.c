#include <stdio.h>

int main(){
        int n;
        printf("Introduceti un numar ");
        scanf("%d",&n);
        switch(n){
            case 1 :printf("Luni"); return 0;
            case 2 :printf("Marti"); return 0;
            case 3 :printf("Miercuri"); return 0;
            case 4 :printf("Joi"); return 0;
            case 5 :printf("Vineri"); return 0;
            case 6 :printf("Sambata"); return 0;
            case 7 :printf("Duminica"); return 0;
        }
        if(n<1 || n>7)
            printf("eroare");
}