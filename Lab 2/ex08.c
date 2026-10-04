#include <stdio.h>

int main(){
    char n;
    do{
        printf("Doriti sa continuati? D/N ");
        scanf(" %c", &n);
    }while(n == 'D' || n=='d');
}