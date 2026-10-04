#include <stdio.h>
#include <string.h>
int Cautare(char sursa[],char cuv[]){
    int i;
    for(i=0;i<strlen(cuv);i++){
        if(strchr(sursa,cuv[i])==NULL)
            return 0;
    }
    return 1;
}
int main(){
    char cuv[100],primul[100];
    int n,k=0;
    scanf("%d",&n);
    getchar();
    gets(primul);
    while(n){
        gets(cuv);
        if(Cautare(primul,cuv)==1)
            k++;
        n--;
    }
    printf("\n%d",k);
   
}