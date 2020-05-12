#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[10];
  int i, num, max_i, min_i;
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    num = rand() % 10 + 1;
    a[i] = num;
    printf("%d ", a[i]);
  }
  printf("\n");

  max_i = 0;
  min_i = 10;
  for (i = 0; i < 10; i++) {
    if (a[i] > max_i) {
      max_i = a[i];
    }
    if (a[i] < min_i) {
      min_i = a[i];
    }
  }
  printf("最大値: %d\n", max_i);
  printf("最小値: %d\n", min_i);
}