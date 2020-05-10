#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  printf("数値を入力: ");
  scanf("%d", &n);

  printf("数値: %d\n", n);
  if (n % 4 == 0) {
    if (n % 400 == 0) {
      printf("閏年です\n");
    } else if (n % 100 == 0) {
      printf("閏年ではない\n");
    } else {
      printf("閏年です\n");
    }
  } else {
    printf("閏年ではない\n");
  }
}