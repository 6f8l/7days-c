#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));
  num = rand() % 10 + 1;
  printf("数値: %d\n", num);
  i = 0;
  while (1) {
    i++;
    printf("■ ");
    if (i == num) {
      break;
    }
  }
  printf("\n");
}