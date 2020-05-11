#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));
  num = rand() % 10 + 1;
  printf("数値: %d\n", num);
  for (i = 0; i < num; i++) {
    printf("■ ");
  }
  printf("\n");
}