#include <stdio.h>

int main(void)
{
  /* 사용 가능한 변수명 */
  int num = 3;
  int number5 = 5;
  int num_ber = 10;
  int Number = 15;

  /* 사용 불가능한 변수명 (컴파일 에러 유발) */
  int hello boy = 3; // 공백 포함
  int hi#$ - 5; // 특수 기호 사용
  int 8number = 8; // 숫자로 시작
  int short = 3; // 기능이 있는 키워드
}