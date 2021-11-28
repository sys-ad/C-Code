#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bonAppetit(int *bill, int k, int b, int n){

    int sum=0;
    int total;

    for(int i=0;i<n;i++){
        sum += *(bill+i);
    }
    int charged=sum/2;
    int actual=(sum-*(bill+k))/2;
    
    if(b==actual){
        printf("%s", "Bon Appetit");

    }else{
        int refund = (charged-actual);
        printf("%d", refund);
    } 
}

int main(){

    int n, k;
    scanf("%d %d",&n, &k);
    int *bill = malloc(sizeof(int)*n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&bill[i]);
    }
    int b;
    scanf("%d",&b);

    bonAppetit(bill,k,b,n);




}
