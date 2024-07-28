#include <stdio.h>

int main (void)
{
  int a = 3; // 00000011
  int b = 5; // 00000101
  int c = -3;

  printf("3 & 5 = %d\n", a & b);
  printf("3 | 5 = %d\n", a | b);
  printf("3 ^ 5 = %d\n", a ^ b);
  printf("~ 3 = %d\n", ~ a);
  printf("~ -3 = %d\n", ~c);

  return 0;
}