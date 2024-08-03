#include <stdio.h>

int recursiveSum(int n)
{
    int sum = 0;

    if (n != 0)
    {
        recursiveSum(n - 1);
        sum += n;
        return sum;
    }
}

int main(void)
{
    int n;
    printf("n을 입력하세요: ");
    scanf("%d", &n);
    int result = recursiveSum(n);
    printf("1부터 n까지의 합: %d\n", result);

    return 0;
}