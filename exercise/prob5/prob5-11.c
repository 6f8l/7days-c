#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[5];
  int i, num;
  srand((unsigned)time(NULL));

  for (i = 0; i < 5; i++) {
    num = rand() % 100 + 1;
    a[i] = num;
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("0以上60未満: ");
  for (i = 0; i < 5; i++) {
    if (a[i] >= 0 && a[i] < 60) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("60以上80未満: ");
  for (i = 0; i < 5; i++) {
    if (a[i] >= 60 && a[i] < 80) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("80以上: ");
  for (i = 0; i < 5; i++) {
    if (a[i] >= 80) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
}