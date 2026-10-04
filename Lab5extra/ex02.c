#include <stdio.h>
#include <math.h>
int delta(int a, int b,int c){
    int delta;
    delta=b*b-4*a*c;
    return delta;
}
void rezultat(int a,int b,int c,double *x1,double *x2){
    if(delta(a,b,c)<0){
        *x1=0;
        *x2=0;
        return;
    }
    *x1= (-b-sqrt((double)delta(a,b,c)))/(2.0*a);
    *x2= (-b+sqrt((double)delta(a,b,c)))/(2.0*a);
}
int main(){
    int a,b,c;
    double x1,x2;
    scanf("%d %d %d",&a,&b,&c);
    rezultat(a,b,c,&x1,&x2);
    printf("%lf %lf",x1,x2);

}