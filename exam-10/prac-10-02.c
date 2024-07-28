#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pnumber = &number;

    printf("%d\n", *pnumber);
    printf("%p\n", pnumber);

    return 0;
}