#include <stdio.h>

int main(void) {
  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int *ptr0 = &arr[0];
  int *ptr7 = &arr[7];

  printf("{");

  /*for (int i = 0; i < 8; i++) {
    int *ptr = (ptr7 - i);

    if (ptr == ptr0) {
      printf("%d}", *ptr);
      break;
    } else
      printf("%d, ", *ptr);
  }*/

  
    for (int i = 0; i < 7; i++) {
      for (int j = 0; (ptr0 + j) < ptr7; j++) {
        int temp = *(ptr0 + j);
        *(ptr0 + j) = *(ptr0 + j + 1);
        *(ptr0 + j + 1) = temp;

        printf("%d: %d, %d + 1: %d\n", j, *(ptr0 + j), j, *(ptr0 + j + 1));
      }

      printf("{%d, %d, %d, %d, %d, %d, %d, %d}\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);
    }

    for (int i = 0; i < 8; i++) {
      if (i == 7)
        printf("%d}", arr[i]);
      else
        printf("%d, ", arr[i]);
    }

  return 0;
}