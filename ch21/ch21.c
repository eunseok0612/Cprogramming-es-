// **********************************************
// 제 목 : ch21 실습과제 모음
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

// 실습과제 2
#include <stdio.h>
int main()
{
	while (1)
	{
		char a; // 입력 받을 한 문자 저장용
		printf("문자입력:");
		scanf(" %c", &a); // 앞의 공백은 버퍼의 개행 문자를 건너뛰기 위함
		if (a == 'q' || a == 'Q') // 문자 비교는 작은따옴표 사용, 둘 중 하나면 종료
			break;
		printf("입력된 문자는: %c \n", a);
	}
	return 0;
}

// 실습과제 3
#include <stdio.h>
int main(void)
{
	int x;                // 사용되지 않는 정수형 변수(예제에서 미사용)
	char name[10];        // 이름을 저장할 배열(최대 9문자 + 널 종료)
	char blood_type;      // 혈액형 한 문자 저장용

	printf("이름을 입력하시오 : ");
	scanf(" %s", name); // %s는 공백 이전까지 읽음, 버퍼 오버플로우 주의

	printf("혈액형을 입력하시오 : ");
	scanf("\n%c", &blood_type); // '\n'로 개행을 소비한 뒤 한 문자 읽기

	printf("이름: % s\n", name);       // 현재 코드의 서식은 잘못되어 있음("% s"는 오류)
	printf("혈액형: % c\n", blood_type); // 마찬가지로 "% c"는 잘못된 서식
	return 0;
}

// 실습과제 4
#include <stdio.h>
int main(void)
{
	char ch; // 입력 문자 저장
	int i;   // 반복 제어 변수

	for (i = 0; i < 5; i++)
	{
		printf("문자 입력:");
		scanf("%c", &ch); // 연속 입력 시 앞의 개행 문자가 남아있을 수 있음
		printf("문자: %c\n", ch);
	}
	return 0;
}

// 실습과제 5
#include <stdio.h>
int main(void)
{
	char str[50]; // 입력 문자열을 저장할 버퍼
	char ch;      // 한 문자씩 읽기 위한 임시 변수
	int i = 0;    // 버퍼 인덱스

	printf("문자열을 입력하시오 : ");
	while (1)
	{
		scanf("%c", &ch);   // 한 문자 읽기
		if (ch == '\n')      // 개행이면 입력 종료
			break;
		str[i] = ch;         // 읽은 문자 저장
		i++;
	}
	str[i] = '\0'; // 문자열 종료 문자 추가
	printf("문자열: %s\n", str);
	return 0;
}
