#include <stdio.h>

int main(void)
{
  int num = 5;

  printf("num의 값: %d\n", ++num);
  printf("num의 값: %d\n", num++);
  printf("num의 값: %d\n", ++num);

  return 0;
}