#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d", &num);

    int left_num = 1;
    int right_num = 1;

    printf("%d %d ", left_num, right_num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", left_num + right_num);
        int temp = right_num;
        right_num = left_num + right_num;
        left_num = temp;
    }

    return 0;
}