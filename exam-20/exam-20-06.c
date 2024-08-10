#include <stdio.h>

typedef struct {
  int xpos;
  int ypos;
} Point;

// 주솟값을 참조하는 매개 변수
void setPosSameValue(Point *ptr) {
  if (ptr->xpos > ptr->ypos) {
    ptr->ypos = ptr->xpos;
  } else {
    ptr->xpos = ptr->ypos;
  }
}

void printPoint(Point point) {
  printf("x: %d, y: %d\n", point.xpos, point.ypos);
}

int main(void) {
  Point position1 = {33, 66};
  Point position2 = {6, 3};

  // 주솟값 전달
  setPosSameValue(&position1);
  setPosSameValue(&position2);

  // 각 포인트 출력
  printPoint(position1);
  printPoint(position2);

  return 0;
}