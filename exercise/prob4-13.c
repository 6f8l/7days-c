#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));
  num = rand() % 10 + 1;

  if (num >= 5) {
    for (i = 0; i < num; i++) {
      printf("★ ");
    }
    printf("\n");
  } else {
    printf("発生した数値: %d\n", num);
  }
}