#include <stdio.h>

int main(void)
{
    // 3행, 3열. 배열 크기 선언할때는 개수. 인덱스 접근은 0, 1, 2
    char bingo[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                bingo[i][j] = 'O';
            else
                bingo[i][j] = 'X';
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", bingo[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}