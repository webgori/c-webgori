#include <stdio.h>

int main (void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int mod = num % 2;

    if (mod == 0)
        printf("입력한 정수는 짝수입니다.");
    else
        printf("입력한 정수는 홀수입니다.");

    return 0;
}