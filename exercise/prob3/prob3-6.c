#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 6 + 1;

  if (n >= 3) {
    printf("3位上です\n");
  }
}