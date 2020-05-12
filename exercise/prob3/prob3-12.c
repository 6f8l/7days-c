#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 11;
  if ((rand() % 2 + 1) % 2 == 0) {
    n *= 1;
  } else {
    n *= -1;
  }

  printf("数値: %d\n", n);
  if (n > 0) {
    printf("正の値です\n");
  } else if (n < 0) {
    printf("負の値です\n");
  } else {
    printf("0です\n");
  }
}