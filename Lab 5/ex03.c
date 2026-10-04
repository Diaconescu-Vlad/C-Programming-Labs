#include <stdio.h>
char C(int v1,int v2, int v3){
    if(v1>v2 && v2>v3)
        return 'D';
    if(v1<v2 && v2<v3)
        return 'C';
    if(v1==v2 && v2==v3)
        return 'I';
    return 'N';
}

int main(){
    int v1,v2,v3;
    int sem=1;
    while(sem==1){
        scanf("%d%d%d",&v1,&v2,&v3);
        printf("%c\n",C(v1,v2,v3));
        scanf("%d",&sem);
    }
}