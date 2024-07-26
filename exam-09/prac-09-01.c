#include <stdio.h>

int main (void)
{
    int nums[5] = {1, 2, 3, 4, 5};
    int nums_size = sizeof(nums) / sizeof(int);
    int sum = 0;

    for (int i = 0; i < nums_size; i++)
    {
        sum += nums[i];
    }

    printf("배열의 모든 요소의 총합: %d\n", sum);

    double average = sum / nums_size;
    printf("배열의 모든 요소의 평균: %0.2f\n", average);

    return 0;
}