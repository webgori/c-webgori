#include <stdio.h>

int countBesu(int num1)
{
    int num2 = num1 + 200;
    int count = 0;

    for (int i = num1 + 1; i < num2; i++)
    {
        if (i % 7 == 0)
            count++;
    }

    printf("%d과 %d 사이 7의 배수는 %d개 입니다!", num1, num2, count);
}

int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    countBesu(num);

    return 0;
}