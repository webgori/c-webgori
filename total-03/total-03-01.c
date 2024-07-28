#include <stdio.h>

int main(void)
{
    int arr[5];
    int max;
    int min;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("NUM%d: ", i + 1);
        scanf("%d", &arr[i]);

        if (i == 0)
        {
            max = arr[i];
            min = arr[i];
        }
        
        sum += arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    printf("총합계: %d\n", sum);

    return 0;
}