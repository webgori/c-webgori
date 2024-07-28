#include <stdio.h>

int main (void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int count = 0;
    int sum = 0;
    
    while (count < num)
    {
        count++;
        sum += count;
    }

    printf("1부터 %d까지의 합은 %d입니다.", num, sum);

    return 0;
}