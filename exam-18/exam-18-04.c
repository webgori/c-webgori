#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr;  // 할당된 메모리의 주솟값을 저장할 포인터
  int count = 0;
  int maxSize = 3;
  int num;
  int i;

  ptr = (int *)calloc(maxSize, sizeof(int));
  while (1) {
    printf("정수를 입력하세요(-1 입력시 종료): ");
    scanf("%d", &num);
    if (num == -1) {
      break;
    }

    if (count == maxSize) {
      maxSize += maxSize;
      ptr = (int *)realloc(ptr, maxSize * sizeof(int));
    }

    ptr[count++] = num;
  }

  for (i = 0; i < count; i++) {
    printf("%d  ", ptr[i]);
  }

  printf("\n");

  if (ptr != NULL) {
    free(ptr);
  }

  return 0;
}