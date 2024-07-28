#include <stdio.h>

int main(void)
{
    int year;
    int month;

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("출력할 연도: ");
    scanf("%d", &year);

    printf("출력할 달(두자리로 입력): ");
    scanf("%d", &month);

    int k = 1, m, d, c, year2 = year;

    if (month == 1 || month == 2)
    {
        year2 = year - 1;

        if (month == 1)
            m = 11;
        else
            m = 12;
    }
    else
        m = month - 2;

    d = year2 % 100;
    c = year2 / 100;
    
    // https://www.youtube.com/watch?v=1tI2cpnRk28
    // 요일 구하는 첼러 공식
    int sum = k + ((13 * m - 1) / 5) + d + (d / 4) + (c / 4) - (2 * c);
    int first_day_of_the_month = sum % 7;

    if (first_day_of_the_month < 0)
        first_day_of_the_month += 7;

    printf("SUN\tMON\tTUS\tWED\tTHU\tFRI\tSAT\n");
    printf("===================================================\n");

    int current_day = first_day_of_the_month;
    
    for (int i = 1; i <= days[month - 1]; i++)
    {
        if (i == 1 && current_day != 0)
        {
            for (int j = 0; j < current_day; j++)
            {
                printf("\t");
            }
        }

        printf("%d\t", i);

        if (current_day == 6)
        {
            printf("\n");
            current_day = 0;
        }
        else
            current_day++;
    }

    return 0;
}