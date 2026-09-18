# Chapter 13-2
## 실습과제 1

* C언어에서 문자는 문자에 해당하는 아스키 코드 값이 저장된다.
* 널문자는 문장의 끝을 나타낼 때 사용한다.
* 저장된 문자열을 한 문자씩 검사해서 널문자를 찾는다.
* 문자열의 길이를 구하는 알고리즘 <br>

1. 문자열의 시작 위치를 찾는다. <br>
2. 문자를 검사하여 널문자인지 확인한다. <br>
3. 널문자가 아니면 1 증가시킨 뒤 다음으로 이동한다. <br>
4. 널문자를 만날 때까지 반복한다. <br>
5. 최종값이 문자열의 길이다.

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
int i = 0;
```
- i 라는 정수형 변수 선언 및 0 저장
```
char a[100];
```
- a 라는 문자형 변수 선언
```
char* b = a;
```
- 포인터 배열 b 선언 및 a 값 저장
```
printf("문자열을 입력하시오: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", a);
```
- 문자열 입력
```
while (*b != '\0') {
  printf("%d번째 문자 %c \n", i + 1, *b);
  b++;
  i++;
}
```
- 널문자를 만나면 반복 종료
- n번째 문자 출력
- b 값에 1 더하기
- i 값에 1 더하기
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="428" height="291" alt="스크린샷 2026-09-18 225748" src="https://github.com/user-attachments/assets/b6dc82a8-b11c-4f48-a500-a906cc4c0085" />


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
char a[100];
```
- a 라는 문자형 변수 선언
```
char* b = a;
```
- 포인터 배열 b 선언 및 a 값 저장
```
printf("문자열을 입력하시오: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", a);
```
- 문자열 입력
```
while (*b != '\0') {
	if (*b >= 'A' && *b <= 'Z')
		*b += ('a' - 'A');
	else if (*b >= 'a' && *b <= 'z')
		*b -= ('a' - 'A');
	b++;
}
```
- 널문자를 만나면 반복 종료
- *b이 A보다 크거나 같거나 Z보다 작거나 같을 때
- *b 값에 'a' - 'A' 만큼 더하기
- *b이 a보다 크거나 같거나 z보다 작거나 같을 때
- *b 값에 'a' - 'A' 만큼 빼기
- i 값에 1 더하기
```
printf("변환 결과: %s \n", a);
```
- 변환 결과 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="448" height="115" alt="스크린샷 2026-09-18 225931" src="https://github.com/user-attachments/assets/a069391d-a0d7-4305-b00e-8d53aedd49a5" />


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
char* a[2];
```
- 포인터 배열 a 선언
```
char a[100], b[100];
```
- a, b 라는 문자형 변수 선언
```
a[0] = b;
```
- a[0]에 b 값 저장
```
a[1] = c;
```
- a[1]에 c 값 저장
```
printf("문자열을 입력하시오: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", a[0]);
```
- 문자열 입력
```
printf("문자열을 입력하시오: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", a[1]);
```
- 문자열 입력
```
if (a[0][0] < a[1][0])
  printf("사전에서 앞에 나오는 문자열: %s \n", a[0]);
```
- a[0][0]이 a[1][0]보다 작을 때
- a[0] 값 출력
```
else if (a[0][0] > a[1][0])
  printf("사전에서 앞에 나오는 문자열: %s \n", a[1]);
```
- a[0][0]이 a[1]][0]보다 클 때
- a[1] 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="548" height="140" alt="스크린샷 2026-09-18 230616" src="https://github.com/user-attachments/assets/69b789c3-5ed2-4687-b4cc-9ab3ac1fd06e" />


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
char* fruits[] = { "apple", "blueberry", orange", "melon" };
```
- 문자열 4개를 저장하는 포인터 배열 fruits 선언 및 초기화
```
int i, min = 0;
```
- i, min 이라는 정수형 변수 선언 및 min 에 0 저장
```
for (i = 1; i < 4; i++)
  if (fruits[i][0] < fruits[min][0])
    min = i;
```
- i가 4보다 작다면 반복
- fruits[i][0]이 fruits[min][0]보다 작을 때
- min 값에 i 값 저장
```
printf("사전에서 제일 앞에 나오는 문자열: %s \n", fruits[min]);
```
- 사전에서 제일 앞에 나오는 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="567" height="93" alt="스크린샷 2026-09-18 230825" src="https://github.com/user-attachments/assets/15c3b70f-9308-435d-9f0d-648e384b0d77" />
