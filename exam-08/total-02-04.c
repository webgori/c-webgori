#include <stdio.h>

int main (void)
{
    int num1;
    printf("피연잔사 1: ");
    scanf("%d", &num1);
    fflush(stdin);

    char operator;
    printf("연산자: ");
    scanf("%c", &operator);
    fflush(stdin);

    int num2;
    printf("피연산자 2: ");
    scanf("%d", &num2);
    fflush(stdin);

    int result;

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }

    printf("%d %c %d = %d", num1, operator, num2, result);

    return 0;
}