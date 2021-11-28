#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int n, k;
    int c=0;
    scanf("%d %d", &n, &k);
    int *ar=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if((ar[i] + ar[j]) % k == 0) {
                c++;
            }
        }
    }

    printf("%d", c);
    
}
