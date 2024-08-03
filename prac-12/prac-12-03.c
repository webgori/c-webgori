#include <stdio.h>

int main(void)
{
    int arr[3][2] = {{6, 7}, {8, 9}, {3, 4}};
    printf("%d %d \n", arr[1][0], arr[0][1]);

    // arr은 배열의 이름이며
    // 배열의 이름은 곧 포인터이므로 & 연산자를 사용하지 않음
    printf("%p %p \n", &arr[2][0], &arr[2][1]);
    printf("%p %p \n", arr[2], arr[2] + 1);
    printf("%d %d \n", *(arr[2] + 1), *(arr[1] + 1));

    printf("%d %d \n", (*(arr + 2)[0]), (*(arr + 0))[1]);
    // arr은 arr[0]의 주소를 나타냄
    // *arr은 arr의 첫번째 요소인 {6, 7}을 나타냄
    // **arr은 {6, 7}의 첫번째 요소인 6을 나타냄
    printf("%d %d \n", **arr, *(*(arr + 0) + 0));

    return 0;
}