#include <stdio.h>

void main() {
  int num;
  printf("1-3の数値を入力してください\n");
  scanf("%d", &num);

  switch (num) {
  case 1:
    printf("one\n");
    break;
  case 2:
    printf("two\n");
    break;
  case 3:
    printf("three\n");
    break;
  default:
    printf("不正な入力です\n");
    break;
  }
}