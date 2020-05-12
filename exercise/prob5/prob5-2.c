#include <stdio.h>

void main() {
  double a[4];
  int i;
  a[0] = 1.2;
  a[1] = -1.3;
  a[2] = 5.2;
  a[3] = 4.8;

  for (i = 0; i < 4; i++) {
    printf("a[%d]=%f ", i, a[i]);
  }
  printf("\n");
}