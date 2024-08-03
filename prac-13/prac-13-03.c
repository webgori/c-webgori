#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];

    printf("문자열 입력: ");
    scanf("%s", str);

    int sum = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            // ascii 코드 48은 0인데 입력된 값에서 48을 빼주면 결과적으로 정수 계산과 동일하다.
            int value = str[i] - 48;
            sum += value;
        }
    }

    printf("숫자의 합은: %d", sum);
    
    return 0;
}