#include <stdio.h>

int main (void)
{
    char word[20];
    printf("영단어 입력: ");
    scanf("%s", word);

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

    char big_letter;

    for (int i = 0; i < null_start_idx; i++)
    {
        char letter = word[i];
        printf("%c: %d\n", letter, letter);

        if (letter > big_letter)
        {
            big_letter = letter;
        }
    }

    printf("아스키코드값이 가장 큰 문자: %c", big_letter);

    return 0;
}