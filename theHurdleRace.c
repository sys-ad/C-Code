#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  int *h = malloc(sizeof(int)*n);
  int max = 0;
  int old_max = 0;

  for (int i=0;i<n;i++) {
    scanf("%d",&h[i]);
    old_max=max;
    if(k<h[i] && (h[i]-k)>max){
      max=(h[i]-k);
    }
  }
  printf("%d", max);
}
