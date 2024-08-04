#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[50];
  char str2[50];

  // 한글 입력시 이슈가 있으므로 영어로 확인
  // 띄어쓰기를 입력받으려면 gets 사용
  gets(str1);
  gets(str2);

  int cmp_value = strcmp(str1, str2);

  if (cmp_value == 0) {
    printf("같습니다.\n");
  } else {
    printf("같지 않습니다.\n");
  }

  return 0;
}