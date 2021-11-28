#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sockMerchant(int *ar, int n){
    int num_pairs=0;
    int ctr=0;
    int i,j;
    
    for(i=0;i<n;i++){
        if(*(ar+i)==-1){
            continue;
        }
        ctr=0;

        for(j=i+1;j<n;j++){
            if(*(ar+i)==*(ar+j)){
                ctr++;
                *(ar+j)=-1;

            }
        }

    ctr=(ctr+1)/2;
    num_pairs += ctr;
    }
    return num_pairs;
        
}


int main(){

    int n;
    int result;
    scanf("%d",&n);
    int *ar = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%i",&ar[i]);
    }
    result=sockMerchant(ar,n);
    printf("%d",result);

}
