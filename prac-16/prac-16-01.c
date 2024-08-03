#include <stdio.h>

int getDiffByValue(int number1, int number2)
{
    return number1 > number2 ? number1 - number2 : number2 - number1;
}

void callDiffByRef(int *number1, int *number2)
{
    int temp;

    if (*number1 < *number2)
    {
        temp = *number1;
        *number1 = *number2;
        *number2 = temp;
    }
}

int main(void)
{
    int number1 = 1;
    int number2 = 2;

    int diffValue = getDiffByValue(number1, number2);
    printf("두 수의 차이는 %d 입니다.\n", diffValue);

    callDiffByRef(&number1, &number2);
    printf("두 수 중 큰 수는 %d 이고, 작은수는 %d 입니다.\n", number1, number2);

    return 0;
}