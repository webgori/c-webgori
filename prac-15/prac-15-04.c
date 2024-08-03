#include <stdio.h>

float toM(int cm)
{
    return cm * 0.01;
}

int main(void)
{

    printf("키를 cm 단위로 입력하세요: ");
    
    int cm;
    scanf("%d", &cm);

    float m = toM(cm);
    printf("결과: %0.2f m", m);

    return 0;
}