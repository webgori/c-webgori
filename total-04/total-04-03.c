#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * toChoice(int *number)
{
    if (*number == 1)
        return "가위";
    else if (*number == 2)
        return "바위";
    else if (*number == 3)
        return "보";
}

char * getResult(int *myChoice, int *randChoice)
{
    if ((*myChoice == 1 && *randChoice == 3) || (*myChoice == 2 && *randChoice == 1) || (*myChoice == 3 && *randChoice == 2))
        return "이겼습니다.";
    else if ((*myChoice == 1 && *randChoice == 1) || (*myChoice == 2 && *randChoice == 2) || (*myChoice == 3 && *randChoice == 3))
        return "비겼습니다.";
    else if ((*myChoice == 3 && *randChoice == 1) || (*myChoice == 1 && *randChoice == 2) || (*myChoice == 2 && *randChoice == 3))
        return "졌습니다.";
}

void game()
{
    printf("가위 1 바위 2 보 3\n");

    printf("당신의 선택은: ");

    srand((unsigned int) time(NULL));
    int randNumber = (rand() % 3) + 1;

    int number;
    scanf("%d", &number);

    char *myChoice = toChoice(&number);
    char *randChoice = toChoice(&randNumber);
    char *result = getResult(&number, &randNumber);

    printf("당신은 %s, 컴퓨터 난수는 %s, %s\n", myChoice, randChoice, result);
}

int main(void)
{
    game();
    game();
}
