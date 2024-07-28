#include <stdio.h>

int main (void)
{
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age < 6 || age >= 65)
    {
        printf("지하철 요금은 무료 입니다.");
    }
    else if (age < 13)
    {
        printf("지하철 요금은 500원 입니다.");
    }
    else if (age < 19)
    {
        printf("지하철 요금은 900원 입니다.");
    }
    else if (age < 65)
    {
        printf("지하철 요금은 1,250원 입니다.");
    }

    return 0;
}