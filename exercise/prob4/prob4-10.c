#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));

  for (i = 0; i < 5; i++) {
    num = rand() % 100 + 1;
    printf("%d\n", num);
  }
}