#include <stdio.h>

typedef struct {
  int xpos;
  int ypos;
} Point;

typedef struct {
  Point startPoint;
  Point endPoint;
} Rect;

void printRectArea(Rect rect) {
  Point startPoint = rect.startPoint;
  int startXPosition = startPoint.xpos;
  int startYPosition = startPoint.ypos;

  Point endPoint = rect.endPoint;
  int endXPosition = endPoint.xpos;
  int endYPosition = endPoint.ypos;

  int width = endXPosition - startXPosition;
  int height = endYPosition - startYPosition;

  int area = width * height;

  printf("사각형의 넓이: %dcm", area);
}

void exchange(Point *ptr1, Point *ptr2) {
  int tempXPos = ptr1->xpos;
  int tempXyos = ptr1->ypos;

  ptr1->xpos = ptr2->xpos;
  ptr1->ypos = ptr2->ypos;

  ptr2->xpos = tempXPos;
  ptr2->ypos = tempXyos;
}

int main(void) {
  Point startPoint = {0, 0};
  Point endPoint = {4, 4};

  Rect rect = {startPoint, endPoint};

  printRectArea(rect);

  return 0;
}
