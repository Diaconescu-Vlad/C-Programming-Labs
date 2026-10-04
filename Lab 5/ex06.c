#include <stdio.h>
int C(int *nr1, int *nr2){
    int cop=*nr1;
    while(cop!=0){
        if(cop%2==0){
            *nr2=*nr2+cop%10;
            *nr2*=10;
            cop/=10;
        }
        else
            cop/=10;
    }
    *nr2/=10;
    if(*nr2!=0)
        return 1;
    else 
        return 0;
}

int main(){
    int nr1, nr2=0;
    scanf("%d",&nr1);
    if(C(&nr1,&nr2)==1)
        printf("Numarul obtinut din %d este %d",nr1,nr2);
    else
        printf("Numarul nu a putut fi construit");
}