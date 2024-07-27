#include <stdio.h>

int main (void)
{
  char star = '*';
  char space = ' ';

  printf("   *   \n", space, space, space, star);
  printf("  ***   \n", space, space, space, star);
  printf(" *****   \n", space, space, space, star);

  printf("%4c\n", star);
  printf("%3c%c%c\n", star, star, star);
  printf("%2c%c%c%c%c\n", star, star, star, star, star);
  printf("%1c%c%c%c%c%c%c\n", star, star, star, star, star, star, star);

  printf("%c%c%c%c\n", space, space, space, star);
  printf("%c%c%c%c%c\n", space, space, star, star, star);
  printf("%c%c%c%c%c%c\n", space, star, star, star, star, star);
  printf("%c%c%c%c%c%c%c\n", star, star, star, star, star, star, star);
}