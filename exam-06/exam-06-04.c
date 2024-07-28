#include <stdio.h>

int main (void)
{
  int a, b;
  a = 1;

  b = a << 2;
  printf("%d << 2 = %d\n", a, b);

  b = a >> 2;
  printf("%d >> 2 = %d", a, b);

  return 0;
}