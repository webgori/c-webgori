#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int) time(NULL));
    int ranNum = (rand() % 10) + 1;
    int answer;

    do
    {
        printf("난수를 맞춰보세요 (1 ~ 10) 사이: ");
        scanf("%d", &answer);
        
        if (answer != ranNum)
            printf("틀렸습니다. 재시도!\n");
    } while (answer != ranNum);

    printf("정답입니다. 프로그램을 종료합니다.\n");

    return 0;
}

// 1, 4, 7, 9, 5, 3, 6, 2, 8, 10