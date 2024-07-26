#include <stdio.h>

int main (void)
{
    for (int i = 1; i < 100; i++)
    {
        int mod = i % 6;

        if (mod == 0)
            printf("%d ", i);
    }

    return 0;
}