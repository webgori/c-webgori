#include <stdio.h>

int main(void)
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr = &arr[7];
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        int value = *(ptr - i);
        // printf("%d\n", value);

        int even = value % 2 == 0 ? 1 : 0;

        if (even)
            continue;

        // printf("%d\n", value);

        sum += value;
    }

    printf("배열 요소 중 홀수의 총합은: %d", sum);

    return 0;
}