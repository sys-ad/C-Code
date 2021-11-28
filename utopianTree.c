#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int t;
    scanf("%d",&t);

    int period=0;
    int height=1;
    int reset_p=0;
    int reset_h=1;
    int n;
    int cycles=0;


    for(int i=0;i<t;i++){
        scanf("%i",&n);
        while(cycles<n){
            if(n==0){
                break;
            }
            if(period%2==0){
                height=(height*2);
                ++period;
            }
            else if(period%2!=0){
                height=(height+1);
                ++period;
            }
        ++cycles;
        }
        printf("%d\n",height);
        period=reset_p;
        height=reset_h;
        cycles=0;
    }

}
