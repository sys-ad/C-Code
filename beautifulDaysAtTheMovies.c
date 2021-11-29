#include <stdlib.h>
#include <stdio.h>

int reverse(int n) {

  int reverse = 0;

  while (n != 0) {
    reverse = reverse * 10;
    reverse = reverse + n % 10;
    n = n / 10;
  }

  return reverse;
}

int main() {

  int i, j, k;
  scanf("%d %d %d", &i, &j, &k);
  int count=0;

  for (i; i <= j; i++) {
        if (abs(i - (reverse(i))) % k == 0) {
            ++count;
    }
  }

  printf("%d", count);

  return 0;
}
