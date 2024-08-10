#include <stdio.h>

typedef struct {
  int xpos;
  int ypos;
} Point;

void exchange(Point *ptr1, Point *ptr2) {
  int tempXPos = ptr1->xpos;
  int tempXyos = ptr1->ypos;

  ptr1->xpos = ptr2->xpos;
  ptr1->ypos = ptr2->ypos;

  ptr2->xpos = tempXPos;
  ptr2->ypos = tempXyos;
}

int main(void) {
  Point position1 = {3, 6};
  Point position2 = {4, 9};

  printf("변경 전\n\n");
  printf("position1: {%d, %d}\n", position1.xpos, position1.ypos);
  printf("position2: {%d, %d}\n\n", position2.xpos, position2.ypos);

  exchange(&position1, &position2);

  printf("변경 후\n\n");
  printf("position1: {%d, %d}\n", position1.xpos, position1.ypos);
  printf("position2: {%d, %d}\n", position2.xpos, position2.ypos);

  return 0;
}
