#include <stdio.h>

int main(void)
{
    int sum_even = 0; // 짝수
    int sum_odd = 0; // 홀수
    int ignore_number = 50;

    for (int i = 1; i <= 100; i++)
    {
        if (i == ignore_number)
            continue;

        int mod = i % 2;

        if (mod == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }

    printf("짝수의 합: %d\n", sum_even);
    printf("홀수의 합: %d\n", sum_odd);
    printf("짝수의 합 + 홀수의 합: %d", sum_even + sum_odd);

    return 0;
}