#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];

    printf("%d %d %d %d %d", *(ptr), *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));

    return 0;
}