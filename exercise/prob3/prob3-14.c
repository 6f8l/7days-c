#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a, b;
  srand((unsigned)time(NULL));
  a = rand() % 10 + 1;
  b = rand() % 10 + 1;

  printf("数値: a=%d, b=%d\n", a, b);
  if (a == b) {
    printf("aとbは等しいです\n");
  } else if (a > b) {
    printf("aの方が大きいです\n");
  } else {
    printf("bの方が大きいです\n");
  }
}