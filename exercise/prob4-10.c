#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num, max_i;
  srand((unsigned)time(NULL));

  max_i = 0;
  for (i = 0; i < 5; i++) {
    num = rand() % 100 + 1;
    printf("%d\n", num);
    if (num > max_i) {
      max_i = num;
    }
  }
  printf("%d\n", max_i);
}