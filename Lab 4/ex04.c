#include <stdio.h>
int main() {
    int v[30], b[30], k[60];
    int n, m, i, j, p;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);        
    i=0; j=0; p=0;
    while(i < n && j < m) {
        if(v[i] % 2 == 0) {
            i++;
            continue;
        }
        if(b[j] % 2 == 0) {
            j++;
            continue;
        }
        
        if(v[i] < b[j])
            k[p++] = v[i++];
        else
            k[p++] = b[j++];
    }
    while(i < n) {
        if(v[i] % 2 != 0)
            k[p++] = v[i];
        i++;
    }
    while(j < m) {
        if(b[j] % 2 != 0)
            k[p++] = b[j];
        j++;
    }
    for(i = 0; i < p; i++)
        printf("%d ", k[i]);
}