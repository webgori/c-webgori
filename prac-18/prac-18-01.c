#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *s1 = "Take a look!";
  char *s2 = (char *)malloc(sizeof(char) * 100);

  strcpy(s2, s1);

  printf("%s\n", s2);

  if (s2 != NULL) free(s2);

  return 0;
}