#include <stdio.h>

int main(void)
{
    char str[50];
    scanf("%s", str);

    int end_position = 0;

    for (int i = 0; end_position == 0; i++)
    {
        if (str[i] == '\0')
            end_position = i;
    }

    for (int i = 0; i < end_position; i++)
    {
        for (int j = i; j < end_position; j++)
        {
            printf("%c ", str[j]);
        }

        printf("\n");
    }

    return 0;
}