#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 100 + 1;

  printf("数値: %d\n", n);
  if (n >= 20 && n < 80) {
    printf("20以上80未満です\n");
  } else {
    printf("20未満か、80以上です\n");
  }
}