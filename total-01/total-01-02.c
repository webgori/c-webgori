#include <stdio.h>

int main (void)
{
  int num;
  printf("10진수 정수 입력: ");
  scanf("%d", &num);

  int input;
  printf("몇 진수로 출력할까요? 8진수는 1 입력, 16진수는 2 입력: ");
  scanf("%d", &input);

  input == 1 ? printf("결과: %o", num) : printf("결과: %x", num);

  return 0;
}