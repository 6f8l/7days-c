#include <stdio.h>

void main()
{
  int w, h;
  printf("長方形の幅: ");
  scanf("%d", &w);
  printf("長方形の高さ: ");
  scanf("%d", &h);

  printf("長方形の面積は、%dm^2です。\n", w * h);
}