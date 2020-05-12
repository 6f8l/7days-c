#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num, min_i;
  srand((unsigned)time(NULL));

  min_i = 100;
  for (i = 0; i < 5; i++) {
    num = rand() % 100 + 1;
    printf("%d\n", num);
    if (num < min_i) {
      min_i = num;
    }
  }
  printf("最小値: %d\n", min_i);
}