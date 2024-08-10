#include <stdio.h>
#include <stdlib.h>

int *createArr(int arr[], int num, int length) {
  int newLength = length + 1;
  int *ptr = (int *)calloc((length + 1), sizeof(int));
  
  // 새로운 정수 추가
  arr[length] = num;

  int temp;

  // 오름차순 정렬
  for (int i = 0; i < newLength; i++) {
    for (int j = i + 1; j < newLength; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  // 동적 할당한 변수에 값 복사
  for (int i = 0; i < newLength; i++) {
    ptr[i] = arr[i];
  }

  return ptr;
}

int main(void) {
  int arr[3] = {1, 5, 7};
  int length = 3;
  int num = 3;
  int *ptr;
  int i;
  ptr = createArr(arr, num, length);

  for (i = 0; i < length + 1; i++) {
    printf("%d ", ptr[i]);
  }

  return 0;
}