#include <stdio.h>
#include <stdlib.h>

typedef struct {
  //char* subject;
  char subject[50];
  //char* author;
  char author[50];
  int releaseDate;
} Book;

int main(void) {
  puts("== 도서 정보 입력 ==");

  int bookCount = 3;

  Book books[bookCount];

  for (int i = 0; i < bookCount; i++) {
    printf("제목: ");
    //gets(books[i].subject);
    scanf("%s", books[i].subject);
    fflush(stdin);

    printf("저자: ");
    //gets(books[i].author);
    scanf("%s", books[i].author);
    fflush(stdin);

    printf("출간년도: ");
    scanf("%d", books[i].releaseDate);
    fflush(stdin);
  }

  puts("== 도서 정보 출력 ==");

  for (int i = 0; i < bookCount; i++) {
    printf("<Book %d>\n", i + 1);
    printf("제목: %s\n", books[i].subject);
    printf("저자: %s\n", books[i].author);
    printf("출간년도: %d\n", books[i].releaseDate);
  }

  return 0;
}