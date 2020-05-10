#include <stdio.h>

void main() {
  int num;
  printf("数値を入力してください\n");
  scanf("%d", &num);

  if (num <= 10 || num >= 90) {
    printf("10以下か90以上の値です\n");
  }
}