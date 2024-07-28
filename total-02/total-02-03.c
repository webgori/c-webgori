#include <stdio.h>

int main (void)
{
    int count = 0;

    // 2부터 30까지의 숫자 중 소수 찾기
    for (int i = 2; i < 30; i++)
    {
        // 2는 아래 반복문 조건에 해당되지 않기 때문에 mod 기본값을 1로 해서 소수로 나오게 한다
        int mod = 1;

        // 2부터 i - 1까지의 숫자로 나눠서 나머지가 0이면 소수 아님
        for (int j = 2; j < i; j++)
        {
            mod = i % j;

            if (mod == 0)
                break;
        }

        // 안나눠지면 소수
        if (mod == 1)
        {
            count++;
            printf("%d ", i);

            if (count == 10)
                break;
        }
    }

    return 0;
}