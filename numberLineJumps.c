#include <stdio.h>


int main(){

int x1;
int v1;
scanf("%d",&x1);
scanf("%d",&v1);
int x2;
int v2;
scanf("%d",&x2);
scanf("%d",&v2);
    if(v1>v2){
        if((x2-x1)%(v1-v2)==0){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
    printf("NO");
    }
    
return 0;
}
