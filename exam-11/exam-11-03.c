#include <stdio.h>

int main(void) {
  int n1 = 3, n2 = 6, n3 = 9;

  int *ptr1 = &n1;
  int *ptr2 = &n2;
  int *ptr3 = &n3;

  int *parr[3] = {ptr1, ptr2, ptr3};

  printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
  printf("%p %p %p\n", parr[0], parr[1], parr[2]);
  printf("%p %p %p\n", &n1, &n2, &n3);

  return 0;
}