#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 100 + 1;

  printf("数値: %d\n", n);
  if (n >= 50) {
    printf("50以上です\n");
  } else {
    printf("50未満です\n");
  }
}