#include <stdio.h>

int main (void)
{
    for (int i = 100; i <= 200; i++)
    {
        int three = i % 3;
        int seven = i % 7;

        if (three == 0 && seven == 0)
            printf("%d ", i);
        else if (three == 0)
            printf("%d ", i);
        else if (seven == 0)
            printf("%d ", i);
    }

    return 0;
}