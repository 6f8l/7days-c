#include <stdio.h>

void main() {
  int num;
  printf("数値を入力してください\n");
  scanf("%d", &num);

  if (num != 1) {
    printf("1ではありません\n");
  }
}