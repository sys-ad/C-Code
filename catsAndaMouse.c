#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int q;
    scanf("%i", &q);
    int x, y, z;
    
    for(int i=0;i<q;i++){
        scanf("%i %i %i",&x,&y,&z);
        int diff1=abs(x-z);
        int diff2=abs(y-z);
        
        if(diff1==diff2){
            printf("%s\n", "Mouse C");
        }
        else if(diff1<diff2){
            printf("%s\n", "Cat A");
        }
        else{
            printf("%s\n", "Cat B");
        }
    }
}
