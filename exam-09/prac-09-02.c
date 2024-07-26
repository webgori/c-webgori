#include <stdio.h>

int main (void)
{
    char word[20];

    printf("영단어 입력: ");
    scanf("%s", word);

    char reverse_word[20];

    int null_start_idx = 0;

    for (int i = 0; i < sizeof(word); i++)
    {
        if (word[i] == '\0')
        {
            null_start_idx = i;
            printf("\\0 문자 인덱스 위치: %d\n", null_start_idx);

            break;
        }
    }

    for (int i = null_start_idx - 1; i >= 0; i--)
    {
        reverse_word[null_start_idx - 1 - i] = word[i];
        printf("word[%d] = %c, reverse_word[%d] = %c\n", i, word[i], null_start_idx - 1 - i, reverse_word[null_start_idx - 1 - i]);
    }

    for (int i = null_start_idx; i < sizeof(reverse_word); i++)
    {
        reverse_word[i] = '\0';
    }

    printf("뒤집은 결과: %s", reverse_word);

    return 0;
}