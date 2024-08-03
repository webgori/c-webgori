#include <stdio.h>

int calc(int num1, int num2)
{
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
}

int main(void)
{
    calc(4, 2);

    return 0;
}