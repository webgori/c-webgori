#include <stdio.h>

int main (void)
{
  int num1;
  printf("NUM1: ");
  scanf("%d", &num1);

  int num2;
  printf("NUM2: ");
  scanf("%d", &num2);

  printf("%d && %d = %d\n", num1, num2, num1 && num2);
  printf("%d || %d = %d\n", num1, num2, num1 || num2);
  printf("%d & %d = %d\n", num1, num2, num1 & num2);
  printf("%d | %d = %d\n", num1, num2, num1 | num2);
}