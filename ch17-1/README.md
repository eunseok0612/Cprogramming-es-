# Chapter 17-1
## 실습과제 1

```
double num = 6.28;
double* ptr = &num;
double** dptr = &ptr;
```

<img width="220" height="508" alt="image" src="https://github.com/user-attachments/assets/32f20b86-7783-4626-ae14-4511ac969b60" />

| 수식 | 결과값 | 결과값의 자료형 |
| :--: | :----: | :----------: |
| ptr | 100 | double* |
| dptr | 300 | double** |
| &ptr | 300 | double** |
| &dptr | 500 | double*** |
| *ptr | 6.28 | double |
| *dptr | 100 | double* |
| **dptr | 6.28 | double |

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int get_max(int** pt1, int n);
```
- n과 이중 포인터 pt1를 전달받는 get_max 선언
```
int main(void)
```
- 메인함수 시작
```
int num1 = 50, num2 = 20, num3 = 30;
```
- 정수형 변수 num1, num2, num3을 선언 후 각각 50, 20, 30 저장
```
int* ptrarr[3] = { &num1, &num2, &num3 };
```
- 3개의 방을 가진 포인터 변수 ptrarr 선언 후 num1, num2, num3의 주소를 저장
```
int max;
```
- 정수형 변수 max 선언
```
max = get_max(ptrarr, 3);
```
- ptrarr, 3을 get_max 함수에 전달 후 반환값을 max에 저장
```
printf("최댓값: %d \n", max);
```
- 최댓값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
int get_max(int** pt1, int n)
```
- n과 이중 포인터 pt1를 전달받는 get_max 선언
```
int* x1 = *pt1;
```
- 포인터 변수 x1 선언 후 포인터 pt1 저장
```
int i;
```
- 정수형 변수 i 선언
```
for (i = 1; i < n; i++)
  if (*(pt1[i]) > x1)
    x1 = *(pt1[i]);
return *x1;
```
- i에 1 저장 후 n 보다 작으면 반복
- 포인터 pt1[i]가 x1보다 클 때
- x1에 포인터 pt1[i] 저장
- 포인터 x1 반환

▼ 실행결과
<img width="820" height="145" alt="스크린샷 2026-10-06 193150" src="https://github.com/user-attachments/assets/a5de6a7e-290d-464e-b93f-63c59b27376d" />


----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
char prn_str(char** pt1, int n);
```
- n과 이중 포인터 pt1를 전달받는 prn_str 선언
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
char prn_str(char** pt1, int n)
```
- n과 이중 포인터 pt1를 전달받는 prn_str 선언
```
for (int i = 0; i < n; i++)
  printf("%s \n", *(pt1 + i));
```
- i에 0 저장 후 n 보다 작을 때 반복
- pt1 + i가 가리키는 변수의 값 출력

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
