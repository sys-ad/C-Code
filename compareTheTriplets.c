#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a[3],b[3],i,j=0,k=0,n=3;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
    i=0;
    while(n--)
    {
        if(a[i]>b[i])
        {
            j++;            
        }
        else if(a[i]<b[i])
        {
            k++;            
        }
        i++;    
    }  
    printf("%d %d",j,k);
    return 0;
}
