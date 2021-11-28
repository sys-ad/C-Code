#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int migratoryBirds(int n, int *ar) {

  int a[5] = {0}, j; // initializing array to check against

  for (int i = 0; i < n; i++)

    a[ar[i]]++; // storing array values into a[]

  int m = 0; // initialized variable to check against

  for (int i = 1; i <= 5; i++)

    if (m < a[i]) {

      m = a[i];

      j = i;
    }
  return j;
}

int main() {

  int n;

  scanf("%i",&n);

  int *ar = malloc(sizeof(int)*n);

  for(int ar_i=0;ar_i<n;ar_i++){

      scanf("%i",&ar[ar_i]);

  }

  int result = migratoryBirds(n, ar);

  printf("%d\n", result);

  return 0;
}
