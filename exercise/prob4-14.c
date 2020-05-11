#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));
  num = rand() % 10 + 1;

  if (num % 2 == 0) {
    for (i = 0; i < num; i++) {
      printf("★ ");
    }
  } else {
    for (i = 0; i < num; i++) {
      printf("☆ ");
    }
  }
  printf("\n");
}