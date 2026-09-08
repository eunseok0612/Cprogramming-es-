# 실습과제 1

```
char ch = 'A';
int in = 10;
double db = 3.4;
```
<img width="150" height="300" alt="image" src="https://github.com/user-attachments/assets/16a8b3f7-9754-4dc0-9d3e-a043f4aadb90" />

| 수식 | 결과값 | 결과값의 자료형 |
| :--: | :----: | :---------------: |
| &ch | 100 | char* |
| &in | 101 | int* |
| &db | 105 | double* |
| *&ch | A | char |
| *&in | 10 | int |
| *&db | 3.4 | double |
----------
# 실습과제 2

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
int a = -100;
```
- a라는 정수형 변수를 선언하고 -100이라는 값을 저장
```
char b = 'A';
```
- b라는 문자형 변수를 선언하고 A라는 값을 저장
```
double c = 3.14;
```
- c라는 실수형 변수를 선언하고 3.14라는 값을 저장
```
int* d = &a;
```
- a의 주소를 d에 저장
```
char* e = &b;
```
- b의 주소를 e에 저장
```
double* f = &c;
```
- c의 주소를 f에 저장
```
printf("int형 변수 a의 값은: %d\n", *d);
```
- a의 값 -100출력
```
printf("char형 변수 b의 값은: %c\n", *e);
```
- b의 값 A출력
```
printf("double형 변수 c의 값은: %.2f\n", *f);
```
- c의 값 3.14출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/1caa73bf-4383-40ce-b80a-b60c21695308" />

----------
# 실습과제 3
<img width="750" height="250" alt="image" src="https://github.com/user-attachments/assets/6e06165f-c6aa-49f3-b673-9da81f27fccc" />

* 125를 정수형 데이터가 저장된 메모리 주소로 사용하기 위해
* 125를 강제로 메모리 주소로 변환해 그 주소에 데이터를 저장하려 했기 때문
----------
# 실습과제 4

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
int a = 100, b = 200;
```
- a와 b라는 정수형 변수를 선언하고 각각 100과 200이라는 값을 저장
```
int sum;
```
- sum이라는 정수형 변수를 선언
```
int* c = &a;
```
- a의 주소를 c에 저장
```
int* d = &b;
```
- b의 주소를 d에 저장
```
sum = *c + *d;
```
- a의 값과 b의 값을 더한 뒤 sum에 저장
```
printf("두 정수의 합: %d\n", sum);
```
- a와 b의 합인 sum을 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/fb4fb623-6772-4d86-8f2b-5244b3ca940e" />

----------
# 실습과제 5

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
int num1 = 10, num2 = 20, num3 = 30;
```
- 정수형 변수 num1, num2, num3을 선언하고 각각 10, 20, 30이라는 값을 저장
```
int *temp;
```
- 포인터 변수 temp를 선언
```
int* ptr1 = &num1;
```
- num1의 주소를 ptr1에 저장
```
int* ptr2 = &num2;
```
- num2의 주소를 ptr2에 저장
```
int* ptr3 = &num3;
```
- num3의 주소를 ptr3에 저장
```
*ptr1 += 10;
```
- *ptr1 = *ptr1 + 10;
```
*ptr2 -= 10;
```
- *ptr2 = *ptr2 - 10;
```
*ptr3 *= 2;
```
- *ptr3 = *ptr3 * 2;
```
temp = ptr1;
ptr1 = ptr2;
ptr2 = ptr3;
ptr3 = temp;
```
- ptr1, ptr2, ptr3이 가리키는 대상을 서로 바꿈
```
printf("ptr1이 가리키는 값: %d\n", *ptr1);
```
- ptr1이 가리키는 값 출력
```
printf("ptr2가 가리키는 값: %d\n", *ptr2);
```
- ptr2가 가리키는 값 출력
```
printf("ptr3이 가리키는 값: %d\n", *ptr3);
```
- ptr3이 가리키는 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/1cba956d-797e-4b97-9c68-99391d2355bd" />
