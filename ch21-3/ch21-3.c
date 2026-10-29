#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
//실습과제1
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100] = "";
	while (1)
	{
		char str2[100] = "";
		printf("문자열 입력:");
		scanf("%s", &str2);
		if (!strcmp(str2, "quit"))
		{
			break;
		}
		strcat(str1, str2);
		strcat(str1, " ");
		printf("입력된 문자열: %s\n",str1);
	}
	return 0;
}

//실습과제2
#include <stdio.h>
#include <string.h>
void RemoveBSN(char str[]);
int my_strlen(char str[]);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	return 0;
}
int my_strlen(char str[])
{
	int count = 0;
	for (int i = 0;str[i] != '\0';i++)
	{
		count += 1;
	}
	return count;
}
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';
}

//실습과제 3
#include<stdio.h>
#include<string.h>
char* my_strcpy(char str2[],const char str1[]);
int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}
char* my_strcpy(char str2[],const char str1[])
{
	
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return str2;
}

//실습과제 4
#include <stdio.h>
void my_strcat(char *str1, char *str2);
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}
void my_strcat(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}

//실습과제5
#include<stdio.h>
#include<string.h>
int main()
{
	char max = 0;
	char min = 0;
	char str[5][100];
	for (int i = 0;i < 5;i++)
	{
		printf("문자열 입력:");
		scanf("%s", str[i]);
	}
	for (int i = 1; i < 5; i++)
	{
		if (strcmp(str[i], str[min]) < 0)
		{
			min = i;
		}

		if (strcmp(str[i], str[max]) > 0)
		{
			max = i;
		}
	}

	printf("제일앞 : %s\n", str[min]);
	printf("제일뒤 : %s\n", str[max]);

	return 0;

}
