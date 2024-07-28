#include <stdio.h>

int main (void)
{
    int count = 0;

    // 2부터 30까지의 숫자 중 소수 찾기
    for (int i = 2; i < 30; i++)
    {
        int mod_count = 0;

        // i를 1부터 자기자신(i)까지 나눴을 때 나눠지면 카운트
        for (int j = 1; j <= i; j++)
        {
            int mod = i % j;
            
            if (mod == 0)
                mod_count++;
        }

        // 나눠지는 개수가 2개 (1과 나)면 출력
        if (mod_count == 2)
        {
            count++;
            printf("%d ", i);

            if (count == 10)
                break;
        }
    }

    return 0;
}