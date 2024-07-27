#include <stdio.h>

int main (void)
{
  int num;
  printf("NUM: ");
  scanf("%d", &num);
  
  printf("%d", num % 10);
  
  return 0;
}