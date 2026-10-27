// **********************************************
// 제 목 : ch21-2 실습과제
// 날 짜 : 2026년 10월27일
// 작성자 : 2600104 송은석
// **********************************************
#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include<stdio.h>

//실습과제 2
int main()
{
	int ch;
	while (1)
	{
		fputs("문자 입력 :",stdout);
		ch = getchar();
		getchar();
		if (ch == 'Q' || ch == 'q')
		{
			break;
		}
		fputs("입력된 문자는",stdout);
		putchar(ch);
		putchar('\n');
	}
	return 0;
}


//실습과제 3
void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	char a[10];
	char b[24];
	char c[10];
	fputs("이름: ", stdout);
	fgets(a, sizeof(a), stdin);
	ClearLineFromReadBuffer();

	fputs("주소: ", stdout);
	fgets(b, sizeof(b), stdin);
	ClearLineFromReadBuffer();

	fputs("자동차번호: ", stdout);
	fgets(c, sizeof(c), stdin);

	fputs(a, stdout);
	putchar('\n');
	fputs(b, stdout);
	putchar('\n');
	fputs(c, stdout);
	return 0;
}

//실습과제 4
int main(void)
{
	char str[20];
	printf("문자열입력:");
	fgets(str, sizeof(str), stdin);
	printf("%s", str);
	return 0;
}

//실습과제5
int main()
{
	char s[50];
	int count = 0;
	fputs("문자열입력:", stdout);
	fgets(s,sizeof(s),stdin);
	for (int i = 0;s[i] != '\0';i++)
	{
		if (s[i] == ' ' || s[i] == '\n')
		{
			count += 1;
		}
	}
	printf("단어 수: %d", count);
	return 0;
}