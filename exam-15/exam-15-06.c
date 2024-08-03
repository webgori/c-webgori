#include <stdio.h>

int number = 0;

void printNumber(void)
{
    printf("전역 변수 number는 %d을 저장하고 있다!\n", number);
}

int main(void)
{
    int number = 3;
    printf("지역 변수 number는 %d을 저장하고 있다!\n", number);
    printNumber();

    return 0;
}
