#include <stdio.h>

/**
 * 오름차순
 * 
 * arr = {5, 4, 3, 2, 1}
 * 
 * 0 1 비교 후 0이 더 크면
 * 0을 1로 1을 0으로
 * 
 * {4, 5, 3, 2, 1}
 * 
 * 1 2 비교 후 1이 더 크면
 * 1을 2로 2를 1으로
 * 
 * {4, 3, 5, 2, 1}
 * 
 * 2 3 비교 후 2가 더 크면
 * 2를 3으로 3을 2로
 * 
 * {4, 3, 2, 5, 1}
 * 
 * 3 4 비교 후 3이 더 크면
 * 3을 4로 4를 3으로
 * 
 * {4, 3, 2, 1, 5}... {3, 2, 1, 4, 5} {2, 1, 3, 4, 5} {1, 2, 3, 4, 5}
 */
void asc(int arr[])
{
    int temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("== 오름차순 정렬 함수 호출! ==\n");
    printf("%d %d %d %d %d\n\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

/**
 * 내림차순
 * arr = {1, 2, 3, 4, 5}
 * 
 * 0 1 비교 후 0이 더 작으면
 * 0을 1로 1을 0으로
 * 
 * {2, 1, 3, 4, 5}
 * 
 * 1 2 비교 후 1이 더 작으면
 * 1을 2로 2를 1으로
 * 
 * {2, 3, 1, 4, 5}
 * 
 * 2 3 비교 후 2가 더 작으면
 * 2를 3으로 3을 2로
 * 
 * {2, 3, 4, 1, 5}
 * 
 * 3 4 비교 후 3이 더 작으면
 * 3을 4로 4를 3으로
 * 
 * {2, 3, 4, 5, 1}... {3, 4, 5, 2, 1} {4, 5, 3, 2, 1} {5, 4, 3, 2, 1}
 */
void desc(int arr[])
{
    int temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("== 내림차순 정렬 함수 호출! ==\n");
    printf("%d %d %d %d %d\n\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

int main() {
    int arr[5];

    printf("배열 요소 1 입력: ");
    scanf("%d", &arr[0]);

    printf("배열 요소 2 입력: ");
    scanf("%d", &arr[1]);

    printf("배열 요소 3 입력: ");
    scanf("%d", &arr[2]);

    printf("배열 요소 4 입력: ");
    scanf("%d", &arr[3]);

    printf("배열 요소 5 입력: ");
    scanf("%d", &arr[4]);

    asc(arr);
    desc(arr);

    return 0;
}