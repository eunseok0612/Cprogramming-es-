#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 1
#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	int score;
};
int main()
{
	struct student s[3];
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("이름 입력:");
		scanf("%s", s[i].name);
		getchar();
		printf("점수 입력:");
		scanf("%d", &s[i].score);
	}

	int j = 0;
	for (i = 1;i < 2;i++)
	{
		if (s[i].score > s[j].score)
		{
			j = i;
		}
	}
	printf("%s,%d", s[j].name, s[j].score);
	return 0;
}

//실습과제 2
#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	int score;
};
int main()
{
	struct student s[3];
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("이름 입력:");
		scanf("%s", s[i].name);
		getchar();
		printf("점수 입력:");
		scanf("%d", &s[i].score);
	}
	
	int j = 0;
	for (i = 1;i < 2;i++)
	{
		if (strcmp(s[i].name, s[j].name)<0)
		{
			j = i;
		}
	}
	printf("%s,%d", s[j].name, s[j].score);
	return 0;
}

//실습과제 3
#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	int score;
};
int main()
{
	struct student s[3];
	struct student* p;
	p = s;
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		
		printf("이름 입력:");
		scanf("%s", (p+i)->name);
		getchar();
		printf("점수 입력:");
		scanf("%d", &(p+i)->score);
	}

	int j = 0;
	for (i = 1;i < 2;i++)
	{
		if (strcmp((p+i)->name, (p+j)->name) < 0)
		{
			j = i;
		}
	}
	printf("%s,%d", (p+j)->name, (p+j)->score);
	return 0;
}

//실습과제 4
#include<stdio.h>
#include<string.h>
struct point
{
	int x;
	int y;
};
struct triangle
{
	struct point p[3];

};
int main()
{
	struct triangle t;
	int i = 0;
	for (int i = 0;i < 3;i++)
	{
		printf("%d번째 점 입력:", i);
		scanf("%d %d", &t.p[i].x, &t.p[i].y);
	}
	int line[3];
	line[0] = (((t.p[0].x - t.p[1].x) * (t.p[0].x - t.p[1].x)) + ((t.p[0].y - t.p[1].y) * (t.p[0].y - t.p[1].y)));
	line[1] = (((t.p[1].x - t.p[2].x) * (t.p[1].x - t.p[2].x)) + ((t.p[1].y - t.p[2].y) * (t.p[1].y - t.p[2].y)));
	line[2] = (((t.p[2].x - t.p[0].x) * (t.p[2].x - t.p[0].x)) + ((t.p[2].y - t.p[0].y) * (t.p[2].y - t.p[0].y)));

	if (((line[0] + line[1]) == line[2]) ||
		((line[1] + line[2]) == line[0]) ||
		((line[2] + line[0]) == line[1]))
		printf("직각삼각형입니다.");
	else
		printf("직각삼각형이 아닙니다.");
	return 0;
}

//실습과제 5
#include<stdio.h>
#include<string.h>
struct empolyee
{
	char name[10];
	char RRN[10];
	int money;
};
int main()
{
	struct empolyee e[3];
	struct empolyee* p;
	p = e;
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("이름 입력:");
		scanf("%s", (p + i)->name);
		getchar();
		printf("주민번호 입력:");
		scanf("%s", (p + i)->RRN);
		getchar();
		printf("급여 입력:");
		scanf("%d", &(p + i)->money);
	}
	for (i = 0;i < 3;i++)
	{
		printf("이름:%s 주민번호:%s 급여:%d\n", (p + i)->name, (p + i)->RRN, (p + i)->money);
	}
	return 0;
}
