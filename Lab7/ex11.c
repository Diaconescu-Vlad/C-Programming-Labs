#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[100];
    int i;
    gets(s);
    s[0]=toupper(s[0]);
    for(i=0;i<strlen(s);i++){
        if(s[i]!=' ' && s[i+1]==' ')
            s[i]=toupper(s[i]);
        if(s[i-1]==' ' && s[i]!=' ')
            s[i]=toupper(s[i]);
    }
    printf("%s",s);
}