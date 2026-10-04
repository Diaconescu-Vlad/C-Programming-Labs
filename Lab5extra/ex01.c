#include <stdio.h>
int fibo(int n1){
    int f1=1,f2=1;
    while(n1!=2){
        f2=f1+f2;
        f1=f2-f1;
        n1--;
    }
    return f2;
}
int fact(int n2){
    int j=1,i=1;
    while(n2!=0){
        i=j*i;
        j++;
        n2--;
    }
    return i;
}
float expresie(float n){
    int b,d;
    b=fibo((int)n);
    d=fact((int)n);
    n=b/(float)d;
    return n;
}
int main(){
    float k;
    scanf("%f",&k);
    printf("%f",expresie(k));
}