#include <stdio.h>
#include <stdlib.h>


int main() {

    int i=0;
    int min, max;
    int n;
    int result[2];
    result[0]=0;
    result[1]=0;

    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];

    for(i=0;i<n;i++){
        
        if(a[i]>max){
            ++result[0];
            max=a[i];
        }else if(a[i]<min){
            ++result[1];
            min=a[i];
        }
    }

    printf("%d %d", result[0], result[1]);

}
