#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    scanf("%i",&n);
    char s[n];
    scanf("%s",s);
    int count=0;
    int step=0;
    int swtch=0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'U') {
        ++step;
        if (step >= 0) {
          swtch = 0;
        }
      } else if (s[i] == 'D') {
        --step;
        if (step < 0 && swtch == 0) {
          swtch = 1;
          count++;
        }
      }
    }

    printf("%d", count);
}
