# Chapter 14-1
## 실습과제 1

* 인자는 함수를 호출하는 변수이고, 매개변수는 함수를 호출받는 변수이다.
* 매개변수가 메모리에 할당되고, 인자값으로 초기화된다.
* 다른 함수에서 선언된 지역변수의 값을 변경할 수 없다.
* 다른 함수에서 선언된 지역변수에 접근하고 싶을 때 가능하다.

----------
## 실습과제 2

1. main 함수 호출 후 add2 함수 호출 전 number -> 15
2. add2 함수 호출 및 실행 number -> 15, value -> 15 -> 17
3. add2 함수 종료 후 number -> 15
4. main 함수 종료 후

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
void add2(int* value);
```
- value의 주소를 전달받는 add2 선언
```
int main(void)
```
- 메인함수 시작
```
int number;
```
- 정수형 변수 number 선언
```
printf("정수를 입력하세요: ");
```
- 정수를 입력하세요 메시지 출력
```
scanf("%d", &number);
```
- 정수 입력
```
add2(&number);
```
- number의 주소를 add2 함수에 전달
```
printf("2만큼 증가한 값: %d \n", number);
```
- 2만큼 증가한 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
void add2(int* value) {
  *value += 2;
}
```
- value가 가리키는 변수의 값에 2 더하기

▼ 실행결과
<img width="555" height="118" alt="스크린샷 2026-09-22 192720" src="https://github.com/user-attachments/assets/225df4d6-0ef2-4cf3-ae64-c7a6084dc823" />

----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int add2(int value);
```
- value를 받아서 처리한 후, value를 반환하는 add2 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int number;
```
- 정수형 변수 number 선언
```
printf("정수를 입력하세요: ");
```
- 정수를 입력하세요 메시지 출력
```
scanf("%d", &number);
```
- 정수 입력
```
number = add2(number);
```
- number 값을 add2에 전달 후, 함수가 반환한 값을 다시 number에 저장
```
printf("2만큼 증가한 값: %d \n", number);
```
- 2만큼 증가한 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
void add2(int* value) {
  value += 2;
  return value;
}
```
- value에 2 더하기
- value값 반환

▼ 실행결과
<img width="561" height="104" alt="스크린샷 2026-09-22 193607" src="https://github.com/user-attachments/assets/e210431a-d8a3-462c-83db-e77731f4eb62" />


----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
void swap(int* px, int* py, int* pz);
```
- px, py, pz의 주소를 전달받는 swap 선언
```
int main(void)
```
- 메인함수 시작
```
int x, y, z;
```
- 정수형 변수 x, y, z 선언
```
printf("정수 x를 입력하시오: ");
```
- 정수 x를 입력하시오 메시지 출력
```
scanf("%d", &x);
```
- 정수 입력
```
printf("정수 y를 입력하시오: ");
```
- 정수 y를 입력하시오 메시지 출력
```
scanf("%d", &y);
```
- 정수 입력
```
printf("정수 z를 입력하시오: ");
```
- 정수 z를 입력하시오 메시지 출력
```
scanf("%d", &z);
```
- 정수 입력
```
printf("swap함수 호출 전 x=%d y=%d z=%d \n", x, y, z);
```
- 함수 호출 전 값 출력
```
swap(&x, &y, &z);
```
- x, y, z의 주소를 swap 함수에 전달
```
printf("swap함수 호출  x=%d y=%d z=%d \n", x, y, z);
```
- 함수 호출 후 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
void swap(int* px, int* py, int* pz) {
  int tmp;
  tmp = *px;
  *px = *py;
  *py = *pz;
  *pz = tmp;
}
```
- 정수형 변수 tmp 선언
- 값 스왑

▼ 실행결과
<img width="565" height="180" alt="스크린샷 2026-09-22 193850" src="https://github.com/user-attachments/assets/f50e4740-6335-4556-a6cb-be5bdb3d902b" />


* x 값이 z로, z 값이 y로, y 값이 x로 이동했다.

1. main 함수 호출 후 swap 함수 호출 전 x -> 10, y -> 20, z -> 30
2. swap 함수 호출 직후 x -> 10, y -> 20, z -> 30, px -> 92, py -> 96, pz -> 100, tmp
3. ① 실행 x -> 10, y -> 20, z -> 30, px -> 92, py -> 96, pz -> 100, tmp -> 10
4. ② 실행 x -> 20, y -> 20, z -> 30, px -> 92, py -> 96, pz -> 100, tmp -> 10
5. ③ 실행 x -> 20, y -> 30, z -> 30, px -> 92, py -> 96, pz -> 100, tmp -> 10
6. ④ 실행 x -> 20, y -> 30, z -> 10, px -> 92, py -> 96, pz -> 100, tmp -> 10
7. swap 함수 종료 후 x -> 20, y -> 30, z -> 10

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int SBV(int num);
```
- num을 받아서 처리한 후, num을 반환하는 SBV 함수 선언
```
void SBR(int* num);
```
- num의 주소를 전달받는 SBR 선언
```
int main(void)
```
- 메인함수 시작
```
int num1 = 10;
int num2 = 10;
```
- 정수형 변수 num1, num2를 선언 후 10 저장
```
num1 = SBV(num1);
```
- num1 값을 SBV에 전달 후, 함수가 반환한 값을 다시 num1에 저장
```
printf("Call-by-value: %d \n", num1);
```
- Call-by-value 값 출력
```
SBR(&num2);
```
- num2의 주소를 SBR 함수에 전달
```
printf("Call-by-reference: %d \n", num2);
```
- Call-by-reference 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
int SBV(int num) {
 return num * 100;
}
```
- num에 100을 곱한 후 반환
```
void SBR(int* num) {
 *num = *num * 100;
}
```
- num이 가리키는 변수의 값에 100 곱하기

▼ 실행결과
<img width="567" height="169" alt="스크린샷 2026-09-22 195625" src="https://github.com/user-attachments/assets/88027d33-99c0-487f-8031-5e06b5294245" />


* 값에 의한 호출은 매개변수의 값을 변경해도 원래 변수에는 영향이 가지 않기 때문에 계산 결과를 반환 후 원래 변수에 저장해야 하지만, 주소에 의한 호출은 포인터를 이용해 원래 변수의 값을 직접 변경할 수 있다는 차이점이 있다.
* 두 방식 모두 같은 결과가 나온다.
