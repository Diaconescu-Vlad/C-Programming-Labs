#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i,j,k,n;
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
            printf("%c",s[j]);
        for(k=i+1;k<=n;k++)
            printf("%c",s[k]);
        printf("\n");
    }
}