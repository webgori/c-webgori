#include <stdio.h>

int main (void)
{
  int num;
  printf("복숭아의 개수는: ");
  scanf("%d", &num);

  int result = num % 10 == 0 ? num / 10 : num / 10 + 1;
  printf("필요한 바구니의 수: %d", result);

  return 0;
}