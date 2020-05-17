#include "calc.h"
#include "showResult.h"
#include <stdio.h>

void main() {
  int a = 2, b = 3;
  printf("%d + %d = ", a, b);
  add(a, b);
  showAnswer();
  printf("%d - %d = ", a, b);
  sub(a, b);
  showAnswer();
}