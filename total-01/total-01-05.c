#include <stdio.h>

int main (void)
{
  int total_seconds;
  printf("초를 입력하세요: ");
  scanf("%d", &total_seconds);

  int hour = total_seconds / 3600;
  int minutes = total_seconds % 3600 / 60;
  int seconds = total_seconds % 60;

  printf("%d시간 %d분 %d초", hour, minutes, seconds);

  return 0;
}