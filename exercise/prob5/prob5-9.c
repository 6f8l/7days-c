#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[10];
  int i, num;
  int z_cnt, p_cnt, m_cnt;
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    num = rand() % 100;
    a[i] = num;
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("50以上の数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] >= 50) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("50未満の数: ");
  for (i = 0; i < 10; i++) {
    if (a[i] < 50) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
}