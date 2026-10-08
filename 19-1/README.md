# Chapter 17-1
## 실습과제 1
## 1-1
### 함수 선언
```
컴파일러에게 함수의 이름, 반환 자료형, 매개변수의 타입 및 개수를 미리 알려주는 작업이다.
```
### 함수 정의
```
함수가 실제로 수행할 동작(본문 코드)을 구현하는 작업이다.
```
### 함수 호출
```
정의된 함수를 실행하기 위해 함수의 이름과 필요한 인자(Argument)를 전달하여 호출하는 작업이다.
```
## 1-2
### 함수의 자료형
```
함수가 반환하는 값의 자료형이다.
```
## 1-3
### 함수명의 자료형
```
함수의 자료형의 포인터이다.
```
## 1-4
### void 포인터의 용도
```
자료형이 정해지지 않은 주소를 저장하기 위해 사용된다.
```
## 1-5
### void 포인터에 간접참조 연산을 적용할 때 주의할 점
```
원하는 자료형의 포인터로 형변환을 거쳐야 한다.
```
## 1-6
### 강제형변환과 자동형변환을 설명
```
자동형변환: 개발자가 명시하지 않아도 컴파일러가 알아서 데이터 타입을 변환하는 현상
```
```
강제형변환: 개발자가 변환 연산자 (type)를 명시하여 강제로 데이터 타입을 바꾸는 방식
```
----------
## 실습과제 2


----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
char prn_str(char** ptrarr[], int count);
```
- coount과 이중 포인터 ptrarr를 전달받는 prn_str 선언
```
int main(void)
```
- 메인함수 시작
```
char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
```
- 포인터 변수 ptrarr 선언 후 eagle, tiger, lion, squirrel 저장
```
int count;
```
- 정수형 변수 count 선언
```
count = sizeof(ptrarr) / sizeof(ptrarr[0]);
```
- count에 ptrarr의 비트 값을 ptrarr[0]의 비트 값으로 나눈 후 저장
```
prn_str(ptrarr, count);
```
- ptrarr, count를 prn_str 함수에 전달
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
char prn_str(char** ptrarr, int count)
```
- count과 이중 포인터 ptrarr를 전달받는 prn_str 선언
```
for (int i = 0; i < count; i++)
  printf("%s \n", *(ptrarr + i));
```
- i에 0 저장 후 count 보다 작을 때 반복
- ptrarr + i가 가리키는 변수의 값 출력

▼ 실행결과
<img width="775" height="191" alt="스크린샷 2026-10-06 193225" src="https://github.com/user-attachments/assets/35704493-62cb-4c63-95fa-26b1e0baa011" />


----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr);
```
- size와 포인터 arr, 이중 포인터 mxPtr, 이중 포인터 mnPtr를 전달받는 MaxAndMin 선언
```
int main(void)
```
- 메인함수 시작
```
int* maxPtr;
int* minPtr;
```
- 포인터 변수 maxPtr, minPtr 선언
```
int arr[5];
```
- 5개의 방을 가진 정수형 변수 arr 선언
```
for (int i = 0;  i < 5; i++) {
  printf("%d번째 정수 입력: ", i + 1);
  scanf("%d", &arr[i]);
}
```
- i에 0 저장 후 5보다 작을 때 반복
- 정수 입력 메시지 출력
- 정수 입력
```
MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
```
- arr, sizeof(arr) / sizeof(int), maxPtr의 주소, minPtr의 주소를 MaxAndMin에 전달
```
printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
```
- 최대, 최소 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr);
```
- size와 포인터 arr, 이중 포인터 mxPtr, 이중 포인터 mnPtr를 전달받는 MaxAndMin 선언
```
int* max;
int* min;
```
- 포인터 변수 max, min 선언
```
max = min = &arr[0];
```
max와 min에 arr[0]의 주소 저장
```
for (int i = 0; i < size; i++) {
  if (*max < arr[i])
    max = &arr[i];
  if (*min > arr[i])
    min = &arr[i];
}
```
- i에 0 저장 후 size보다 작을 때 반복
- 포인터 max가 arr[i]보다 작을 때
- max에 arr[i]의 주소 저장
- 포인터 min이 arr[i]보다 클 때
- min에 arr[i]의 주소 저장
```
*mxPtr = max;
*mnPtr = min;
```
- 포인터 mxPtr에 max 값 저장
- 포인터 mnPtr에 min 값 저장

▼ 실행결과
<img width="864" height="270" alt="스크린샷 2026-10-06 193248" src="https://github.com/user-attachments/assets/d9eea648-0aeb-4ff6-bb6e-31e4d64ae716" />
