#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[3][3];
  int i, j, num;
  srand((unsigned)time(NULL));

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      num = rand() % 10;
      a[i][j] = num;
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}