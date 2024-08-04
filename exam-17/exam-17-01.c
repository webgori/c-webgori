#include <stdio.h>

int main(void) {
  int num = 3;
  int *ptr1 = &num;  // num의 주소를 저장하는 포인터 변수 ptr1
  int **dptr = &ptr1;  // 포인터 변수 ptr1의 주솟값을 저장하는 더블 포인터
  int *ptr2;

  printf("%p %p\n", ptr1, dptr);
  printf("%d %d\n", num, **dptr);

  // ptr1의 주소 -> num의 주소 ->  3
  //    dptr           ptr1      num

  ptr2 = *dptr;  // dptr이 가리키고 있는 곳의 값 (num의 주소)을 저장

  // ptr1의 주소 -> num의 주소 ->  3
  //    dptr       ptr1, ptr2    num

  *ptr2 = 9;     // ptr2가 기리키고 있는 곳 (num)의 값을 9로 저장
  printf("%d %d\n", num, **dptr);

  return 0;
}