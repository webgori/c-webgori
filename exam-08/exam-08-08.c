#include <stdio.h>

int main (void)
{
    int dan, mul;

    for (dan = 2; dan < 10; dan++)
    {
        for (mul = 1; mul < 10; mul++)
            printf("%d ", dan * mul);
        printf("\n");
    }

    return 0;
}