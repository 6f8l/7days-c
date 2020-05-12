#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 100 + 1;

  printf("数値: %d\n", n);
  if (n % 2 == 0 && n <= 50) {
    printf("50以下の偶数です\n");
  } else if (n % 2 == 0) {
    printf("偶数です\n");
  } else if (n <= 50) {
    printf("50以下です\n");
  } else {
    printf("その他の値です\n");
  }
}