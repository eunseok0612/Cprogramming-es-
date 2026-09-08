// **********************************************
// 제 목 : 챕터12-2 실습과제
// 날 짜 : 2026년 9월 8일
// 작성자 : 2600104 송은석
// **********************************************

//실습과제2
#include <stdio.h>
int main(void)
{
	int a = -100;
	char b = 'A';
	double c = 3.14;
	int* pa = &a;
	char* pb = &b;
	double* pc = &c;
	printf("int형 변수 a의 값은 : %d\n", *pa);
	printf("char형 변수 b의 값은 : %c\n", *pb);
	printf("double형 변수 c의 값은 : %lf\n", *pc);
	return 0;
}

//실습과제 4
#include <stdio.h>
int main(void)
{
	int a = 100, b = 200;
	int sum;
	sum = a + b;
	int* psum = &sum;
	printf("두정수의 합 : % d\n" ,*psum);
	return 0;
}

//실습과제 5
#include<stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* temp;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	*ptr1 += 10;
	*ptr2 -= 10;
	*ptr3 *= 2;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	ptr3 = temp;

	printf("ptr1이 가리키는 값: %d\n", *ptr1);
	printf("ptr2가 가리키는 값: %d\n", *ptr2);
	printf("ptr3이 가리키는 값: %d\n", *ptr3);

	return 0;
}