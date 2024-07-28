#include <stdio.h>

int main (void)
{
  int age;

  printf("나이를 입력하세요: ");
  scanf("%d", &age);

  int price = age >= 20 ? 1250 : 800;

  printf("당신의 나이는 %d세이며 요금은 %d원입니다!", age, price);

  return 0;
}