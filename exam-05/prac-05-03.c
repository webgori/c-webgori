#include <stdio.h>

int main (void)
{
  int korean_score = 86;
  int english_score = 75;
  int math_score = 88;
  int social_score = 60;
  int science_score = 96;

  int sum = korean_score + english_score + math_score + social_score + science_score;
  double average = sum / 5;

  printf("%0.2f", average);
}