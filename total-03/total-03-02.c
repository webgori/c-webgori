#include <stdio.h>

int main(void)
{
    int arr[8] = {};
    int odd_arr[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    int even_arr[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("NUM%d: ", i + 1);
        scanf("%d", &arr[i]);

        int odd = arr[i] % 2;

        if (odd)
            odd_arr[i] = arr[i];
        else
            even_arr[i] = arr[i];
    }

    printf("짝수: ");

    for (int i = 0; i < 8; i++)
    {
        int value = even_arr[i];

        if (value == -1)
            continue;
        
        printf("%d ", value);
    }

    printf("\n홀수: ");

    for (int i = 0; i < 8; i++)
    {
        int value = odd_arr[i];

        if (value == -1)
            continue;
        
        printf("%d ", value);
    }

    return 0;
}