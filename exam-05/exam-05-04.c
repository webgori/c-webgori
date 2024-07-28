#include <stdio.h>

int main (void)
{
  // 변수의 선언
  int a = 10, b = 10;

  printf("a: %d\n", a);
  printf("a: %d\n", ++a); // 증가를 먼저 하고 출력합니다 (a가 11이 된 후 출력됩니다.)
  printf("a: %d\n", a);

  printf("b: %d\n", b);
  printf("b: %d\n", b++); // 출력을 먼저 하고 증가합니다. (b가 10일 때 출력된 후 1만큼 증가합니다.)
  printf("b: %d\n", b);

  return 0;
}