#include <stdio.h>
int C(char *c1, char *c2, char *c3){
    int ok=0;
    if(*c1>='a' && *c1<='z'){
        *c1-='a'-'A';
        ok=1;
    }
    if(*c2>='a' && *c2<='z'){
        *c2-='a'-'A';
        ok=1;
    }
    if(*c3>='a' && *c3<='z'){
        *c3-='a'-'A';
        ok=1;
    }
    return ok;
}
int main(){
        char c1, c2, c3;
        scanf("%c %c %c",&c1, &c2, &c3);
        if(C(&c1,&c2,&c3)==1){
            printf("Transformarea a avut succes ");
            printf("%c %c %c",c1,c2,c3);
        }
        else
        printf("Transformarea a esuat\nCaracterele nu erau litere mici");

}