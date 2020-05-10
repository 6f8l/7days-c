#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 100 + 1;

  printf("数値: %d\n", n);
  if (n >= 80) {
    printf("優\n");
  } else if (n < 80 && n >= 70) {
    printf("良\n");
  } else if (n < 70 && n >= 60) {
    printf("可\n");
  } else {
    printf("不可\n");
  }
}