#include <stdio.h>

typedef struct worker {
  char name[10];
  char phoneNumber[20];
  int salary;
} WORKER;

int main(void) {
  WORKER worker[3];

  for (int i = 0; i < 3; i++) {
    printf("직원의 이름: ");
    gets(worker[i].name);
    fflush(stdin);

    printf("직원의 전화번호: ");
    gets(worker[i].phoneNumber);
    fflush(stdin);

    printf("직원의 월급여: ");
    scanf("%d", &worker[i].salary);
    fflush(stdin);
  }

  printf("\n");

  // 한글 이름은 출력이 안됨
  for (int i = 0; i < 3; i++) {
    printf("직원의 이름: %s\n", worker[i].name);
    printf("직원의 전화번호: %s\n", worker[i].phoneNumber);
    printf("직원의 월급여: %d\n", worker[i].salary);
  }

  return 0;
}