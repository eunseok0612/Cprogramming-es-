// **********************************************
// 제 목 : ch21 실습과제 모음
// 날 짜 : 2026년 10월 13일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 2
#include <stdio.h>
int main()
{
	while(1)
	{
		char a;
		printf("문자입력:");
		scanf(" %c", &a);
		if (a == 'q' || a == 'Q')
			break;
		printf("입력된 문자는: %c \n", a);
	}
	return 0;
}

//실습과제 3
#include <stdio.h>
int main(void)
{
	int x;
	char name[10];
	char blood_type;
	printf("이름을 입력하시오 : ");
	scanf(" %s", name);
	printf("혈액형을 입력하시오 : ");
	scanf("\n%c", &blood_type);
	printf("이름: % s\n", name);
	printf("혈액형: % c\n", blood_type);
	return 0;
}

//실습과제 4
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("문자 입력:");
		scanf("%c", &ch);
		printf("문자: %c\n", ch);
	}
	return 0;
}

//실습과제 5
#include <stdio.h>
int main(void)
{
    char str[50];
    char ch;
    int i = 0;
    printf("문자열을 입력하시오 : ");
    while (1) 
    {
        scanf("%c", &ch);
        if (ch == '\n') 
            break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("문자열: %s\n", str);
    return 0;
}