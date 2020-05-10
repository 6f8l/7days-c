#include <stdio.h>

void main() {
  int a;
  printf("数値を入力: ");
  scanf("%d", &a);
  if (a > 0) {
    printf("入力値は正の値です");
  }
}
