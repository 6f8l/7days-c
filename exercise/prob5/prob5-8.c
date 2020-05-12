#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[5];
  int i, num;
  int z_cnt, p_cnt, m_cnt;
  srand((unsigned)time(NULL));

  for (i = 0; i < 5; i++) {
    num = rand() % 20 - 10;
    a[i] = num;
    printf("%d ", a[i]);
    if (a[i] >= 0) {
      p_cnt += 1;
    } else if (a[i] < 0) {
      m_cnt += 1;
    } else {
      z_cnt += 1;
    }
  }
  printf("\n");
  printf("0より大きい数: %d\n", p_cnt);
  printf("0より小さい数: %d\n", m_cnt);
  printf("0の個数: %d\n", z_cnt);
}