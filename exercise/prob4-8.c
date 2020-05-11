#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int i, num;
  srand((unsigned)time(NULL));

  while (1) {
    num = rand() % 10 + 1;
    printf("%d\n", num);
    if (num == 10) {
      break;
    }
  }
  printf("Done\n");
}