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

  printf("5以上の数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] >= 5) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("5未満の数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] < 5) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
}