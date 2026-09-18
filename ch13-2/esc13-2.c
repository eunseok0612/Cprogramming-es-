// **********************************************
// 제 목 : 챕터 13-2 실습과제
// 날 짜 : 2026년 9월 17일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 2
#include<stdio.h>
int main(void)
{
	int i = 0;
	char s[50];
	char* ps=s;
	printf("문자열을 입력하시오: ");
	scanf("%s",s);
	while(*ps!='\0')
	{
		printf("%d 번째 문자: %c\n",i+1, *ps);
		ps++;
		i++;
	}
	return 0;
}

//실습과제 3
#include <stdio.h>
int main(void) 
{
	char a[50];
	char* b = a;
	printf("문자열을 입력하시오: ");
	scanf("%s", a);
	while (*b != '\0') 
	{
		if (*b >= 'A' && *b <= 'Z')
			*b += ('a' - 'A');
		else if (*b >= 'a' && *b <= 'z')
			*b -= ('a' - 'A');
		b++;
	}
	printf("변환 결과: %s \n", a);
	return 0;
}

//실습과제 4
#include <stdio.h>
int main(void) 
{
	char* a[2];
	char b[100], c[100];
	a[0] = b;
	a[1] = c;
	printf("문자열을 입력하시오: ");
	scanf("%s", a[0]);
	printf("문자열을 입력하시오: ");
	scanf("%s", a[1]);
	if (a[0][0] < a[1][0])
		printf("사전에서 앞에 나오는 문자열: %s \n", a[0]);
	else if (a[0][0] > a[1][0])
		printf("사전에서 앞에 나오는 문자열: %s \n", a[1]);
	return 0;
}

//실습과제 5
#include <stdio.h>
int main(void) 
{
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
	int i, min = 0;
	for (i = 1; i < 4; i++)
	{
		if (fruits[i][0] < fruits[min][0])
			min = i;
	}
	printf("사전에서 제일 앞에 나오는 문자열: %s \n", fruits[min]);
	return 0;
}