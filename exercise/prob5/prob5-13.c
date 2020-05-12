#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[3][3];
  int i, j, num;
  int max_num, min_num;
  srand((unsigned)time(NULL));

  max_num = 0;
  min_num = 10;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      num = rand() % 10;
      a[i][j] = num;
      printf("%d ", a[i][j]);
      if (a[i][j] > max_num) {
        max_num = a[i][j];
      } else if (a[i][j] < min_num) {
        min_num = a[i][j];
      }
    }
    printf("\n");
  }
  printf("最大値: %d\n", max_num);
  printf("最小値: %d\n", min_num);
}