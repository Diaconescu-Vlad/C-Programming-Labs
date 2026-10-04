#include <stdio.h>
int C(int n){
    int s=0;
    for(int i=1;i<n-1;i++)
        if(n%i==0)
            s+=i;
    if(s==n)
        return 1;
    
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    if(C(n)==1)
        printf("Numarul este perfect");
    else
        printf("Numarul nu este perfect");
}