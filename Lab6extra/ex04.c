#include <stdio.h>
double crestereMaxima(double v[],int n){
    int i,k=0,max=0;
    double smax=0.0;
    for(i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            k++;
            if(k>=max){
                max=k;
                smax=v[i+1]-v[i-k+1];
            }
        }
        else{
            k=0;
        }
    }
    return smax;
}
int main(){
    double v[10],max;
    int n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&v[i]);
    max=crestereMaxima(v,n);
    printf("%lf",max);
}