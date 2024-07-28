#include <stdio.h>

int main (void)
{
    int korean = 88;
    int english = 90;
    int math = 58;
    int social = 81;
    int science = 72;

    int sum = korean + english + math + social + science;
    int average = sum / 5;
    int quotient = average / 10;

    char grade;

    switch (quotient)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("평균 점수는 %d점, 학점은 %c 입니다.", average, grade);
}