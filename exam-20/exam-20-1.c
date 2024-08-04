#include <stdio.h>

typedef struct {
  char name[30];
  int age;
} Person;

int main(void) {
  Person boy = {"효날두", 35};
  Person *ptr = &boy;  // Person형 포인터 변수는 구조체 변수 boy를 참조합니다.

  // 다음 두 코드는 동일한 결과를 출력합니다. (기호가 다를 뿐 목적은 같습니다.)
  printf("%s (%d)\n", (*ptr).name, (*ptr).age);
  printf("%s (%d)\n", ptr->name, ptr->age);

  return 0;
}