#include <stdio.h>

int main(void)
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int i, j;

    int (*arrptr)[3] = arr;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arrptr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}