// **********************************************
// 제 목 : 실습과제 14-1
// 날 짜 : 2026년 9월 22일
// 작성자 : 2600104	송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 2
#include <stdio.h>
void add2(int *value);
int main(void)
{
	int number;
	printf("정수를 입력하세요: ");
	scanf("%d", &number);
	add2(&number);
	printf("2만큼 증가한 값 : % d\n", number);
		return 0;
}
void add2(int* value)
{
	*value += 2;
}

//실습과제 3
#include <stdio.h>
int add2(int value);
int main(void)
{
	int number;	
	printf("정수를 입력하세요: ");	 
	scanf("%d", &number);
	number = add2(number);
	printf("2만큼 증가한 값 : % d\n", number);
	return 0;
}
int add2(int value)
{
	value += 2;
	return value;
}

//실습과제 4
#include <stdio.h>
void swap(int* px, int* py, int* pz);
int main(void)
{
	int x, y, z;
	printf("정수 x를 입력하시오: ");
	scanf("%d", &x);
	printf("정수 y를 입력하시오: ");
	scanf("%d", &y);
	printf("정수 z를 입력하시오: ");
	scanf("%d", &z);
	printf("swap함수 호출 전 x=%d y=%d z=%d \n", x, y, z);
	swap(&x, &y, &z);
	printf("swap함수 호출 후 x=%d y=%d z=%d \n", x, y, z);
	return 0;
}
void swap(int* px, int* py, int* pz) 
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = *pz;
	*pz = tmp;
}

//실습과제 5
#include <stdio.h>
int SBV(int num);
void SBR(int* num);
int main(void)
{
	int num1 = 10;
	int num2 = 10;
	printf("기존 저장된 값: %d\n", num1);
	num1 = SBV(num1);
	printf("Call-By-Value 기반: %d\n", num1);
	printf("기존 저장된 값: %d\n", num2);
	SBR(&num2);
	printf("Call-By-Re2ference 기반: %d\n", num2);
	return 0;
}
int SBV(int num)
{
	return num * 100;
}
void SBR(int* num)
{
	*num *= 100;
}