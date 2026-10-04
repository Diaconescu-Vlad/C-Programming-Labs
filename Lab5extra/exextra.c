#include <stdio.h>
int C(int *n,int *count){
    int cop = *n;
    int cop2=0;
    int k = 1;
    int sem = 0;
    while(cop != 0){
        sem = 0;
        for(int j = 1; j < 6; j++){
            int pow10 = 1;
            for(int t = 0; t < j; t++) pow10 *= 10;
            if(cop % pow10 == cop % k)
                sem = 1;
        }
        k=10;
        if(sem == 0){
            cop2 += cop % k;
            cop2 *= 10;
        }
        cop /= 10;
        (*count)++;
    }
    *n=cop2;
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    printf("%d %d",C(&n,&count));
}