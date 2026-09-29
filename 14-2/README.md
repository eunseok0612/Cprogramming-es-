# 실습과제 1

## 1. 주소에 의한 호출을 사용해야 하는 3가지 경우를 설명하라.

### 1-1.  다른 함수에서 선언된 지역 변수의 값을 변경하고 싶은 경우
일반적인 값에 의한 호출은 변수의 값을 복사하여 전달하기 때문에 호출된 함수에서 값을 변경해도 원래 변수에는 영향을 주지 않는다.  
따라서 다른 함수에서 선언된 지역변수의 값을 직접 변경하고자 할 때는 변수의 주소를 전달하는 주소에 의한 호출을 사용해야 한다.

### 1-2. 배열을 함수의 인자에 전달하는 경우
배열을 함수의 인자로 전달할 때는 배열 전체를 복사하는 것이 아니라 배열의 시작 주소인 배열명을 전달한다.  
함수에서는 전달받은 주소를 이용하여 배열의 각 원소에 접근할 수 있다. 따라서 배열을 함수의 매개변수로 전달할 때는 포인터를 이용한 주소에 의한 호출을 사용한다.

### 1-3. 함수의 리턴 값이 2개 이상인 경우
C언어의 함수는 `return`을 통해 한 번에 하나의 값만 반환할 수 있다.  
두 개 이상의 값을 반환해야 하는 경우에는 값을 저장할 변수들의 주소를 함수에 전달하고, 함수에서 해당 주소를 통해 값을 저장하는 방법을 사용한다.

## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int get_max(int* array, int n);
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_max 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int grade[5];
```
- 5개의 방을 가진 정수형 grade 배열 선언
```
int i, max;
```
- 정수형 변수 i, max 선언
```
printf("정수 5개를 입력하시오. \n");
```
- 정수 5개 입력 메시지 출력
```
for (i = 0; i < 5; i++)
  scanf("%d", &grade[i]);
```
- 정수 5개 입력
```
max = get_max(grade, 5);
```
- grade, 5 값을 get_max에 전달 후, 함수가 반환한 값을 다시 max에 저장
```
printf("최댓값은 %d입니다. \n", max);
```
- 최댓값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
int get_max(int* array, int n)
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_max 함수 선언
```
int i, max;
```
- 정수형 변수 i, max 선언
```
max = *array;
```
- max에 array가 가리키는 변수의 값 넣기
```
for (i = 1; i < n; i++)
  if (*(array + i) > max)
    max = *(array + i);
```
- n번 반복
- array + i가 가리키는 변수의 값이 max 보다 크면
- max에 array + i가 가리키는 변수의 값 넣기
```
return max;
```
- max를 반환

▼ 실행결과
<img width="583" height="231" alt="스크린샷 2026-09-29 192356" src="https://github.com/user-attachments/assets/f1e6956a-a20c-43c2-8e66-265946f85489" />


----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int get_data(int* array, int n);
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_data 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int i, data[5];
```
- 5개의 방을 가진 정수형 data와 정수형 변수 i 선언
```
get_data(data, 5);
```
- data, 5 값을 get_data에 전달 후 값을 반환
```
for (i = 0; i < 5; i++)
  printf("%d번째 data: %d \n", i + 1, data[i]);
```
- 5번 반복
- data 출력
```
int get_data(int* array, int n)
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_data 함수 선언
```
int i;
```
- 정수형 변수 i 선언
```
for (i = 0; i < n; i++) {
  printf("%d번째 data를 입력하시오: ", i + 1);
  scanf("%d", (array + i));
}
```
- n번 반복
- data 입력 메시지 출력
- data 입력

▼ 실행결과
<img width="577" height="295" alt="스크린샷 2026-09-29 193513" src="https://github.com/user-attachments/assets/f269cd8c-5aed-48e0-9d8a-3e932249b584" />


----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
void separate(double num, int* integer, double* decimal);
```
- integer와 decimal의 주소를 전달받고, num을 받아서 처리한 후, num을 반환하는 separate 함수 선언
```
int main(void)
```
- 메인함수 시작
```
double num, decimal;
```
- 실수형 변수 num, decimal 선언
```
int integer;
```
- 정수형 변수 integer 선언
```
printf("실수를 입력하시오: ");
```
- 실수 입력 메시지 출력
```
scanf("%lf", &num);
```
- 실수 입력
```
separate(num, &integer, &decimal);
```
- integer, decimal의 주소와 num을 전달 후 값을 반환
```
printf("정수부: %d \n", integer);
```
- 정수부 출력
```
printf("소수부: %d \n", decimal);
```
- 소수부 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
void separate(double num, int* integer, double* decimal)
```
- integer와 decimal의 주소를 전달받고, num을 받아서 처리한 후, num을 반환하는 separate 함수 선언
```
*integer = (int)num;
```
- *integer 값에 num 값 저장
```
*decimal = num - *integer;
```
- *decimal 값에 num - *integer 값 저장

▼ 실행결과
<img width="471" height="124" alt="스크린샷 2026-09-29 193954" src="https://github.com/user-attachments/assets/57c7a9c7-4fe6-421d-8ffd-a57b04ca38b8" />


----------
## 실습과제 5

* 문제에서 정의한 함수의 기능은 인자로 전달된 배열의 전체요소를 출력하는 것이다. 따라서 프로그래머가 실수로라도 배열요소의 값을 바꾸는 일은 없어야 한다. 그래서 매개변수 arr에 const 선언을 추가한 것이다. 이제 프로그래머가 실수로 배열요소의 값을 바꾸는 코드를 작성할 경우 컴파일 에러가 발생할 것이다. 따라서 프로그래머는 자신의 실수를 인식하고 적절히 코드를 수정할 기회를 얻을 수 있게 되었다.
