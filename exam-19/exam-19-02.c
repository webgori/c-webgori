#include <stdio.h>
#include <string.h>

struct person {
  char name[30];
  int age;
};

int main(void) {
  struct person boy = {"김소년", 12};
  struct person girl = {"이소녀", 9};

  printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
  printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);

  return 0;
}