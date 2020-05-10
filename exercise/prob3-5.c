#include <stdio.h>

void main() {
  int num;
  printf("数値を入力してください\n");
  scanf("%d", &num);

  if (num >= 20 || num < 80) {
    printf("20以上80未満です\n");
  }
}