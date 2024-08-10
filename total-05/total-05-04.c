#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int no;
  char name[50];
} Student;

void insertStudent(Student students[]) {
  puts("[입력]");

  printf("학생 번호: ");
  int no;
  scanf("%d", &no);
  fflush(stdin);

  printf("학생 이름: ");
  char name[50];
  gets(name);

  strcpy(students[no - 1].name, name);
}

void printStudent(Student students[]) {
  puts("[출력]");

  for (int i = 0; i < 100; i++) {
    char name[50];

    strcpy(name, students[i].name);

    if (strcmp(name, "") != 0) {
      printf("%s\n", students[i].name);
      printf("학생 번호: %d\n", i + 1);
      printf("학생 이름: %s\n", name);
    }
  }
}

void findStudent(Student students[]) {
  puts("[검색]");

  printf("학생 번호: ");
  int no;
  scanf("%d", &no);

  printf("학생 이름: %s\n", students[no - 1].name);
}

void deleteStudent(Student students[]) {
  puts("[삭제]");

  printf("학생 번호: ");
  int no;
  scanf("%d", &no);

  strcpy(students[no - 1].name, "");
}

int main(void) {
  int num = 0;

  Student students[100] = {
      0,
  };

  while (1) {
    puts("=== 메뉴 ===");
    puts("1. 입력");
    puts("2. 출력");
    puts("3. 검색");
    puts("4. 삭제");

    printf("당신의 선택은: ");
    scanf("%d", &num);

    if (num == 1) {
      insertStudent(students);
    } else if (num == 2) {
      printStudent(students);
    } else if (num == 3) {
      findStudent(students);
    } else if (num == 4) {
      deleteStudent(students);
    }
  };

  return 0;
}