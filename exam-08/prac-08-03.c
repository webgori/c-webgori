#include <stdio.h>

int main (void)
{
    int exit = 0;
    char character;

    while (exit == 0)
    {
        printf("입력하세요: ");

        /* scanf를 사용하면 키보드로 입력받은 문자가 버퍼에 저장되는데
           %c 형식으로 받는경우 입력받은 문자 + \n(엔터)를 같이 입력받는것으로 되어서 scanf를 두번 받게된다.
           그래서 scanf 뒤에 버퍼를 비워주는 fflush를 사용해주면 \n을 없앨 수 있다.
        */
        scanf("%c", &character);
        fflush(stdin);

        if (character >= 65 && character <= 90)
            exit = 1;

        if (exit == 0)
            printf("%c 입력했습니다.\n", character);
        else
            printf("%c 입력했습니다. 종료합니다.\n", character);
    }

    return 0;
}