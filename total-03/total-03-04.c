#include <stdio.h>

int main(void) {
  char str[50];
  scanf("%s", str);

  int end_position = 0;

  for (int i = 0; end_position == 0; i++) {
    if (str[i] == '\0') end_position = i;
  }

  int match = 1;

  for (int i = 0; i < end_position; i++) {
    int last_character_position = end_position - 1;

    if (str[i] != str[last_character_position - i]) {
      match = 0;
      break;
    }
  }

  if (match)
    printf("동일합니다.");
  else
    printf("동일하지 않습니다.");

  return 0;
}