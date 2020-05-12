#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int a[5];
  int i, num;
  int sum;
  double avg;
  srand((unsigned)time(NULL));

  sum = 0;
  for (i = 0; i < 5; i++) {
    num = rand() % 10 + 1;
    a[i] = num;
    sum += a[i];
    printf("%d ", a[i]);
  }
  printf("\n");

  avg = sum / 5.0;
  printf("合計値: %d\n", sum);
  printf("平均値: %f\n", avg);

  printf("平均値より大きい数: ");
  for (i = 0; i < 5; i++) {
    if (a[i] > avg) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  printf("平均値より小さい数: ");
  for (i = 0; i < 5; i++) {
    if (a[i] < avg) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
}