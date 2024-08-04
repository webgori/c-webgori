#include <stdio.h>

struct worker {
  char name[10];
  char phoneNumber[20];
  int salary;
};

int main(void)
{
  struct worker worker;

  printf("직원의 이름: ");
  gets(worker.name);

  printf("직원의 전화번호: ");
  gets(worker.phoneNumber);

  printf("직원의 월급여: ");
  scanf("%d", &worker.salary);

  printf("직원의 이름: %s\n", worker.name);
  printf("직원의 전화번호: %s\n", worker.phoneNumber);
  printf("직원의 월급여: %d\n", worker.salary);

  return 0;
}