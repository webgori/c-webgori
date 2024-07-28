#include <stdio.h>

int main (void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for (int i = num1; i <= num2; i++)
    {
        for (int j = 1; j < 10; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    }

    return 0;
}