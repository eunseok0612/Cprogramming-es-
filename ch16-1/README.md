# Chapter 16-1
## 실습과제 1

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int x1[2][2] = { { 2, 4 }, { 5, -5 } };
int x2[2][2] = { { -2, 3 }, { 0, -5 } };
int x3[2][2];
```
- 2x2 사이즈 2차원 배열 x1, x2, x3 선언 후 초기화
```
printf("연산 결과: \n");
```
- 연산 결과 메시지 출력
```
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    *(*(x3 + i) + j) = *(*(x1 + i) + j) + *(*(x2 + i) + j);
    printf("%d\t", *(*(x3 + i) + j);
  }
  printf("\n");
}
```
- i 선언 및 0 저장 후 값이 2보다 작으면 반복
- j 선언 및 0 저장 후 값이 2보다 작으면 반복
- x3이 가리키는 변수에 x1이 가리키는 변수의 값과 x2가 가리키는 변수의 값을 더한 후 저장
- x3이 가리키는 변수의 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="588" height="191" alt="스크린샷 2026-10-01 203204" src="https://github.com/user-attachments/assets/49546493-feae-4a3f-aca8-18242a28c1a0" />


----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int score[3][3];
```
- 3x3 사이즈 2차원 배열 score 선언
```
int ave[3];
```
- 3개의 방을 가진 정수형 ave 배열 선언
```
int i, max, first;
```
- 정수형 변수 i, max, first 선언
```
for (i = 0; i < 3; i++) {
  printf("%d번째 학생의 국어, 영어 수학 성적을 입력: ", i + 1);
	scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
	ave[i] = (score[i][0] + score[i][1] + score[i][2]) / 3;
}
```
- i에 0 저장 후 3보다 작으면 반복
- 학생 성적 입력 메시지 출력
- 학생 성적 입력
- 학생 성적 평균 저장
```
max = ave[0];
first = 0;
```
- max에 첫번째 학생의 평균 저장
- first에 0 저장
```
for (i = 1; i < 3; i++)
  if (ave[i] > max) {
    max = ave[i];
    first = i;
  }
```
- i에 1 저장 후 3보다 작으면 반복
- 학생 성적 평균이 max보다 클 때
- max에 학생 성적 평균 저장
- first에 i 값 저장
```
printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다. \n", first + 1, max);
```
- 최우수 학생과 평균 점수 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="690" height="212" alt="스크린샷 2026-10-01 203318" src="https://github.com/user-attachments/assets/31e394e0-8f2b-474f-b51f-b7093815f92d" />


----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int x1[3][3] = { { -5, 2, 35 }, { -20, 5, 100 }, { -75, 5, -25 } };
```
- 3x3 사이즈 2차원 배열 x1 선언 후 초기화
```
int max = x1[0][0];
```
- 정수형 변수 max 선언 후 x1의 첫번째 값 저장
```
int row = 1, column = 1;
```
- 정수형 변수 row와 column 선언 후 1 저장
```
for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
		if (x1[i][j] > max) {
			max = x1[i][j];
			row = i + 1;
			column = j + 1;
		}
```
- i 선언 및 0 저장 후 3보다 작으면 반복
- j 선언 및 0 저장 후 3보다 작으면 반복
- x1가 max보다 클 때
- max에 x1 저장
- row에 i + 1 저장
- column에 j + 1 저장
```
printf("최댓값은 %d \n", max);
```
- 최댓값 출력
```
printf("위치는 %d행 %d열 \n", row, column);
```
- 최댓값의 위치 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과 (행이 가로, 열이 세로이므로 3행 2열이 옳은 답)
<img width="715" height="172" alt="스크린샷 2026-10-01 203504" src="https://github.com/user-attachments/assets/a81191c6-5eec-48cb-afc3-dcdd04d9bad7" />

----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
char str[4][10];
```
- 10x4 사이즈 2차원 배열 str 선언
```
int i, j;
```
- 정수형 변수 i, j 선언
```
int x1[4];
```
- 4개의 방을 가진 정수형 x1 배열 선언
```
for (i = 0; i < 4; i++) {
  j = 0;
  printf("%d번째 문자열 입력: ", i + 1);
  scanf("%s", &str[i][0]);
  while (str[i][j] != '\0')
    j += 1;
  x1[i] = j;
}
```
- i에 0 저장 후 4보다 작으면 반복
- j에 0 저장
- 문자열 입력 메시지 출력
- 문자열 입력
- str이 NULL이 아니면 반복
- j 값에 1 더하기
- x1에 j 저장
```
for (i = 0; i < 4; i++)
  printf("%d번째 문자열 길이: %d \n", i + 1, x1[i]);
```
- i에 0 저장 후 4보다 작으면 반복
- 문자열 길이 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="695" height="274" alt="스크린샷 2026-10-01 203727" src="https://github.com/user-attachments/assets/a8758caa-106c-44fa-b1a1-4f796d64fdb3" />

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
char str[4][10];
```
- 10x4 사이즈 2차원 배열 str 선언
```
int i, last = 0;
```
- 정수형 변수 i, last 선언 후 last에 0 저장
```
for (i = 0; i < 4; i++) {
	printf("%d번째 문자열 입력: ", i + 1);
	scanf("%s", &str[i][0]);
}
```
- i에 0 저장 후 4보다 작으면 반복
- 문자열 입력 메시지 출력
- 문자열 입력
```
for (i = 1; i < 4; i++)
	if (str[i][0] > str[last][0])
		last = i;
```
- i에 1 저장 후 4보다 작으면 반복
- str[i][0]이 str[i - 1][0] 보다 클 때
- last에 i 값 저장
```
printf("사전에서 제일 뒤에 나오는 문자열: %s \n", &str[last][0]);
```
- 사전에서 제일 뒤에 나오는 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="741" height="224" alt="스크린샷 2026-10-01 203927" src="https://github.com/user-attachments/assets/b05143e0-8da0-45d9-afae-e7a6987dbcbb" />

