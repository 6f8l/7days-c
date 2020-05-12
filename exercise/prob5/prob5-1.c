#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[6];
  int i, num;
  srand((unsigned)time(NULL));
  for (i = 0; i < 6; i++) {
    num = rand() % 10 + 1;
    a[i] = num;
    printf("a[%d]=%d ", i, a[i]);
  }
  printf("\n");
}