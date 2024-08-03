#include <stdio.h>

int main(void)
{
    int num = 3;
    int *ptr1 = &num;
    int **dptr = &ptr1;
    int *ptr2;

    printf("%p %p %p %p\n", &num, ptr1, &ptr1, dptr);
    printf("%d %d\n", num, **dptr);

    ptr2 = *dptr; // ptr1이 저장하고 있는 주소 (*dptr)를 ptr2에 저장
    *ptr2 = 9;

    printf("%d %d\n", num, **dptr);

    return 0;
}