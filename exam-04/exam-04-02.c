#include <stdio.h>

int main (void)
{
  /*
  제어 문자의 \기호는
  글꼴에 따라 \ 기호로 대체 가능합니다.
  */

  printf("\"I am a boy.\"\n");
  printf("I am a \'boy\'.\n");
  printf("I \tam\ta\tboy.\n");
  printf("I\bam a boy.\n");
  printf("I am a boy\\\?\n");

  return 0;
}