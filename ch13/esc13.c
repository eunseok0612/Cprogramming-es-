// **********************************************
// 제 목 : 챕터13 실습과제
// 날 짜 : 2026년 9월 10일
// 작성자 : 2600104 송은석
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//실습과제2

#include <stdio.h>
int main(void)
{
	int grade[5];
	int sum = 0, i, average;
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	for (i = 0; i < 5; i++)
		sum += *(grade + i);
	average = sum / 5.0;
	printf("성적 평균= %d\n", average);
	return 0;
}

//실습과제3
#include <stdio.h>
int main(void)
{
	int a[] = { 10, 20, 30 }, i, sum = 0;
	int* p = a;
	for (i = 0; i < 3; i++)
		sum += *p++;
	printf("sum:%d\n", sum);
	return 0;
}

//실습과제4
#include <stdio.h>
int main(void)
{
    double arr[5];
    double* ptr = arr;
    int i;
    printf("5개의 실수를 입력하시오.\n");
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr++);
    ptr = arr;
    for (i = 0; i < 5; i++)
        *(ptr++) += 2.0;
    ptr = arr;
    printf("2씩 증가시킨 결과: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(ptr++));
    printf("\n");
    return 0;
}

//실습과제5
#include <stdio.h>
int main(void)
{
    double arr[5];
    double* ptr = arr;
    double* temp;
    int i;
    // 포인터 덧셈연산을 이용하여 5개의 실수 입력
    printf("5개의 실수를 입력하시오.\n");
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);
    // 포인터 덧셈연산을 이용하여 모든 배열요소를 2씩 증가
    for (i = 0; i < 5; i++)
        *(ptr + i) += 2.0;
    // 1. 배열을 이용한 배열표현
    printf("1. arr[i] : ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", arr[i]);
    printf("\n");
    // 2. 배열명을 이용한 주소표현
    printf("2. *(arr+i) : ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(arr + i));
    printf("\n");
    // 3. 포인터 변수를 이용한 배열표현
    printf("3. ptr[i] : ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", ptr[i]);
    printf("\n");
    // 4. 포인터 변수를 이용한 주소표현
    printf("4. *(ptr+i) : ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(ptr + i));
    printf("\n");
    // 5. 증감연산자를 이용한 주소표현
    temp = ptr;
    printf("5. *temp++ : ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(temp++));
    printf("\n");
    return 0;
}
