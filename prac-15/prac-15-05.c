#include <stdio.h>

int toTime (int total_seconds)
{
  int hour = total_seconds / 3600;
  int minutes = total_seconds % 3600 / 60;
  int seconds = total_seconds % 60;

  printf("결과: %d시간/%d분/%d초", hour, minutes, seconds);
}

int main(void)
{
    printf("몇 초: ");

    int total_seconds;
    scanf("%d", &total_seconds);

    toTime(total_seconds);

    return 0;
}