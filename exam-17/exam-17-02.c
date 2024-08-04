#include <stdio.h>
/**
 *                  num1의 주소 -> 66
 *                      temp      num1
 * 
 *    ptr1의 주소 -> num1의 주소 -> 66
 *       dptr1          ptr1      num1
 * 
 *    ptr2의 주소 -> num2의 주소 -> 99
 *       dptr2          ptr2      num2
 * 
 *    ptr1의 주소 -> num2의 주소 -> 99
 *       dptr1          ptr1      num2
 * 
 *    ptr2의 주소 -> num1의 주소 -> 66
 *       dptr2          ptr2      num1
 */
void swapNumber(int **dptr1, int **dptr2) {
  int *temp = *dptr1;   // temp는 dptr1이 가리키는 곳의 값 (num1의 주소)을 저장
  *dptr1 = *dptr2; // dptr1이 가리키는 곳의 값을 dptr2가 가리키는 곳의 값 (num2의 주소)으로 변경
  *dptr2 = temp; // dptr2가 가리키는 곳의 값을 temp의 값 (num1의 주소)으로 변경
}

int main(void) {
  int num1 = 66, num2 = 99;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  printf("*ptr1: %d *ptr2: %d\n", *ptr1, *ptr2);
  swapNumber(&ptr1, &ptr2);  // 값의 교환이 아닌, 주솟값의 교환이 이루어집니다.
  printf("*ptr1: %d *ptr2: %d\n", *ptr1, *ptr2);

  return 0;
}