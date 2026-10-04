#include <stdio.h>

int main()
{
    int l1,l2,l3,l;
    printf("Introduceti cele 3 laturi ale triunghiului: ");
    scanf("%d %d %d",&l1,&l2,&l3);
    if(l1>l3){
        l=l3;
        l3=l1;
        l1=l;
    }
    if(l2>l3){
        l=l3;
        l3=l2;
        l2=l;
    }
    if((l1+l2)>l3)
        printf("Laturile formeaza un triunghi ");
    else{
        printf("Laturile nu pot forma un triunghi");
        return 0;
    }
    if(l1==l2 && l1!=l3)
        printf("isoscel");
    if(l1==l2 && l1==l3)
        printf("echilateral");
    if(l3*l3==(l2*l2+l1*l1))
        printf("dreptunghic");
}