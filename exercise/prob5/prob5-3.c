#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[10];
  int i, num;
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    num = rand() % 10 + 1;
    a[i] = num;
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("奇数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] % 2 != 0) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("偶数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] % 2 == 0) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
}