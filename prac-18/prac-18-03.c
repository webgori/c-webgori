#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("문자열의 최대 길이는? ");

  int maxLength;
  scanf("%d", &maxLength);
  fflush(stdin);

  printf("문자열 입력: ");

  char *str = (char *)malloc(sizeof(char) * maxLength);
  gets(str);

  int asciiCodeOfA = 97;
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 97) count++;
  }

  printf("%c의 개수는: %d개입니다.", asciiCodeOfA, count);

  return 0;
}