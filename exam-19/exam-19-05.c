#include <stdio.h>

typedef struct {
  int x;
  int y;
} POINT;

struct person {
  char name[30];
  int age;
};

typedef struct person PERSON;

int main(void) {
  POINT position = {30, 60};
  PERSON saram = {"강사람", 10};
  printf("%d %d\n", position.x, position.y);
  printf("%s %d\n", saram.name, saram.age);

  return 0;
}