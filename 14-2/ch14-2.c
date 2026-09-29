// **********************************************
// 제 목 : ch14-2 실습과제
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//실습과제 2
#include <stdio.h>
int get_max(int* array, int n);
int main(void)
{
	int grade[5];
	int i, max;
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	max = get_max(grade, 5);
	printf("최대값은 %d입니다.\n", max);
	return 0;
}
int get_max(int* array, int n) // int get_max(int array[ ], int n)
{
	int i, max;
	max = *array; // *array => array[0];
	for (i = 1; i < n; i++)
		if (*(array + i) > max) max = *(array + i); // *(array+i) => array[i];
	return max;
}

//실습과제 3
#include <stdio.h>
void get_data(int* data, int n);
int main(void)
{
	int i, data[5];
	get_data(data, 5);
	for (i = 0; i < 5; i++)
		printf("% d번째 data : % d\n", i + 1, data[i]);
	return 0;
}
void get_data(int* data, int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf("%d번째 data를 입력하시오:", i + 1);
		scanf("%d", &data[i]);
	}
}

//실습과제 4
#include <stdio.h>
void getParts(double num, int* integerPart, double* decimalPart);
int main(void) 
{
	double inputNum;
	int intPart;
	double decPart;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &inputNum);
	getParts(inputNum, &intPart, &decPart);
	printf("정수부 : %d\n", intPart);
	printf("소수부 : %f\n", decPart);
	return 0;
}
void getParts(double num, int* integerPart, double* decimalPart) 
{
	*integerPart = (int)num;
	*decimalPart = num - *integerPart;
}