#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[10];
  int i, j, num;
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    num = rand() % 10 + 1;
    a[i] = num;
    printf("%d ", a[i]);
  }
  printf("\n");

  for (i = 0; i < 10; i++) {
    for (j = 0; j < a[i]; j++) {
      printf("* ");
    }
    printf("\n");
  }
}