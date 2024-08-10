#include <stdio.h>
#include <stdlib.h>

void swapArr(int arr1[], int arr2[], int length) {
  int temp;

  for (int i = 0; i < length; i++) {
    temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}

int main(void) {
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[5] = {2, 4, 6, 8, 10};
  int length = 5;
  int i;

  swapArr(arr1, arr2, length);

  for (i = 0; i < length; i++) {
    printf("%d ", arr1[i]);
  }

  printf("\n");

  for (i = 0; i < length; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}