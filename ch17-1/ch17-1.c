#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 2
#include<stdio.h>
int get_max(int* ptrarr[], int size);
int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3); // 함수호출
	printf("최댓값:%d\n", max);
	return 0;
}
int get_max(int* ptrarr[], int size)
{
	int max=*ptrarr[0];
	for (int i = 1;i < size;i++)
	{
		if (*ptrarr[i]>max)
			max=ptrarr[i];
	}
	return max;
}

//실습과제 3
#include<stdio.h>
// 함수선언
char prn_str(char* ptrarr[], int count);
int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
}
// 함수정의
char prn_str(char* ptrarr[], int count)
{
	for (int i = 0;i < count;i++)
	{
		printf("%s\n", ptrarr[i]);
	}
}

//실습과제 4
#include <stdio.h>
void MaxAndMin(int* arr, int size, int **mxptr, int **mnptr)
{
	int* max, * min;
	int i;
	max = min = &arr[0];
	for (i = 0;i < size;i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*mxptr = max;
	*mnptr = min;
}
int main(void)
{
	int* maxptr;
	int* minptr;
	int arr[5];
	int i;
	for (i = 0;i < 5;i++)
	{
		printf("정수 입력 %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
	printf("최대: %d, 최소: %d \n", *maxptr, *minptr);
	return 0;
}