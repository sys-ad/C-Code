#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
  int n;
  scanf("%d", &n);
  int *a = malloc(sizeof(int) * n);
  int j = 0, i = 0;
  int count = 0;
  int max = 0;

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), cmpfunc);

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (abs(a[i] - a[j]) == 1 || abs(a[i] - a[j]) == 0) {
        ++count;
      }
    }
    if (count > max) {
      max = count;
    }
    count = 0;
  }
  printf("%d", max + 1);
}
