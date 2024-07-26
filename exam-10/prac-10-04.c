#include <stdio.h>

int main(void)
{
    int n1 = 100, n2 = 200;
    int *ptr1 = &n1;
    int *ptr2 = &n2;

    printf("%d %d\n", *ptr1, *ptr2);

    int temp = n1;
    n1 = n2;
    n2 = temp;

    printf("%d %d\n", *ptr1, *ptr2);

    return 0;
}