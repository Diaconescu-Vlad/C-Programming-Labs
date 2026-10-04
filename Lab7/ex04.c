#include <stdio.h>
#include <string.h>
int lungime(char s[]){
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}
void concatenare(char s[], char rez[],int l,int *n){
    int i;
    int start=*n;
    for(i=0;i<l;i++){
        rez[start+i]=s[i];
    }
    *n+=l;
    rez[*n+1]='\0';
}
int main(){
    char s1[50], s2[50], s3[50], rez[150];
    int i,l1,l2,l3,n=0;
    rez[0]='\0';
    gets(s1);
    gets(s2);
    gets(s3);
    l1=lungime(s1);
    l2=lungime(s2);
    l3=lungime(s3);
    concatenare(s1,rez,l1,&n);
    concatenare(s2,rez,l2,&n);
    concatenare(s3,rez,l3,&n);
    printf("%s",rez);
}