#include <stdio.h>

int main(void)
{
    int gugudan[4][9];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int dan = i + 2;
            gugudan[i][j] = dan * (j + 1);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", gugudan[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}