#include <stdio.h>
#include <stdlib.h>


int solve(int n, int* s, int d, int m){
    int i,j,sum,c=0;
    for(i=0;i<=n-m;i++){ // largest viable init indx
        sum=0;
        for(j=i;j<m+i;j++){
            sum=sum+*(s+j);
        }
        if(sum==d)
            c++;

    }
    return c;
}

int main(){
    int n;
    int d;
    int m;
    scanf("%d", &n);
    int *s=malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
    scanf("%d %d",&d, &m);
    int result=solve(n,s,d,m);
    printf("%d\n",result);
    return 0;
}

