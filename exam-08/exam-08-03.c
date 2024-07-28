#include <stdio.h>

int main (void)
{
    int num;

    while (1)
    {
        printf("무한 반복 중… 숫자를 입력하세요.: ");
        scanf("%d", &num);
        printf("%d을(를) 입력하셨네요.\n", num);
    }

    return 0;
}