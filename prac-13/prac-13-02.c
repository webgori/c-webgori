#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[50];
  char str2[50];

  // 한글 입력시 이슈가 있으므로 영어로 확인
  // 띄어쓰기를 입력받으려면 gets 사용
  gets(str1);
  gets(str2);

  int str1_len = strlen(str1);
  int str2_len = strlen(str2);

  if (str1_len > str2_len) {
    printf("%s\n", str1);
    printf("%s\n", str2);
  } else {
    printf("%s\n", str2);
    printf("%s\n", str1);
  }

  return 0;
}