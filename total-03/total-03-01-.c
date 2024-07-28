#include <stdio.h>

int main(void)
{
    int arr[5] = {};
    int max = -1;
    int min = -1;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("NUM%d: ", i + 1);
        scanf("%d", &arr[i]);

        if (max == -1)
            max = arr[i];
        
        if (min == -1)
            min = arr[i];

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