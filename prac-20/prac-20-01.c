#include <stdio.h>

typedef struct {
  char name[30];
  int age;
  double height;
} PERSON;

int main(void) {
  PERSON person = {"손오공", 30, 180.35};
  PERSON *ptr = &person;

  printf("이름: %s\n나이: %d\n신장: %0.2f\n", ptr->name, ptr->age, ptr->height);

  return 0;
}