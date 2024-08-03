#include <stdio.h>

int sumRange(int num1, int num2)
{
    int sum = 0;

    for (int i = num1 + 1; i < num2; i++)
    {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int num1 = 5;
    int num2 = 9;
    int sum = sumRange(num1, num2);

    printf("%d와 %d 사이의 정수의 총합은: %d", num1, num2, sum);

    return 0;
}