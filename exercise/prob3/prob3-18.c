#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 45 - 10;

  printf("数値: %d\n", n);
  if (n >= 30) {
    printf("真夏日です\n");
  } else if (n < 30 && n >= 25) {
    printf("夏日です\n");
  } else if (n < 0) {
    printf("真冬日です\n");
  } else {
    printf("その他です\n");
  }
}