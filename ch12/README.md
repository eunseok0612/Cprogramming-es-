# 소스코드 설명
```
#include<stdio.h>
```
- printf,scanf 등 라이브러리 함수의 선언을 포함하고 있는 헤더파일 stdio.h을 포함하라
```
int main(void)
```
- 메인함수 시작
```
char a = 'A';
```
- 문자형 변수 a에 A 저장
```
int b = 36;
```
- 정수형 변수 b에 36 저장
```
double c = 3.141592;
```
- 실수형 변수 c에 3.141592 저장
```
printf("char형 변수 a의 주소 : %u\n",&a);
```
화면에 cahr형 변수 a의 주소를 출력
```
printf("int형 변수 b의 주소 : %u\n",&b);
```
화면에 int형 변수 b의 주소를 출력
```
printf("double형 변수 c의 주소 : %u\n",&c);
```
화면에 double형 변수 c의 주소를 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

# 실행결과
<img width="1217" height="147" alt="스크린샷 2026-09-04 015648" src="https://github.com/user-attachments/assets/9697adc4-7c17-465e-ae2e-cc47cd371da1" />
