#include <stdio.h>

int main (void)
{
  int age;
  printf("나이를 입력하세요: ");
  scanf("%d", &age);

  int height;
  printf("키를 입력하세요: ");
  scanf("%d", &height);

  age >= 12
    && height >= 120
    ? printf("놀이기구에 탑승할 수 있습니다!")
    : printf("놀이기구에 탑승할 수 없습니다!");

  return 0;
}