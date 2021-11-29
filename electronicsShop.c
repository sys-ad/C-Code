#include <stdio.h>

int main() {
  int b,n,m;
  scanf("%d %d %d",&b,&n,&m);
  int *keyboards=malloc(sizeof(int)*n);
  int usb_d[m];
  int diff;
  int max=b;
  int i,j=0;
  int total=-1;

  for(i=0;i<n;i++) {
    scanf("%d",&keyboards[i]);
  }
  while(j<n){
    for(i=0;i<m;i++){
      scanf("%d",&usb_d[i]);
      diff=b-(keyboards[j]+usb_d[i]);
      if(keyboards[j]+usb_d[i]<=b && diff<max){
          max=diff;
          total=keyboards[j]+usb_d[i];
      }
      else if(keyboards[j]+usb_d[i]>b){
          continue;
      }
    }
    j++;
  }
  printf("%d",total);
}
