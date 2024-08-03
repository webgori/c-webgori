#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ranNum;

    for (int i = 0; i < 5; i++)
    {
        ranNum = rand() % 11;
        printf("%d\n", ranNum);
    }

    return 0;
}