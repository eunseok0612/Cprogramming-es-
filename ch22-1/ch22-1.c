// **********************************************
// 제 목 : ch22-1 실습과제
// 날 짜 : 2026년 11월 4일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지

//실습과제 2
#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	char name[10];
	char per[20];
};
int main()
{
	struct student s;
	printf("학번을 입력하시오:");
	scanf("%d", &(s.num));

	printf("이름을 입력하시오:");
	scanf("%s", s.name);
	getchar();

	printf("주소를 입력하시오:");
	fgets(s.per, sizeof(s.per), stdin);

	printf("1. 학번:%d\n", s.num);
	printf("2. 이름:%s\n", s.name);
	printf("3. 주소:%s", s.per);
	return 0;
}

//실습과제 3
#include<stdio.h>
#include<string.h>
struct car
{
	char model[10];
	char num[10];
	int km;
};
int main()
{
	struct car c;
	printf("모델을 입력하시오:");
	scanf("%s", &(c.model));
	getchar();

	printf("번호판을 입력하시오:");
	scanf("%s", c.num);
	getchar();

	printf("주행거리를 입력하시오:");
	scanf("%d", &(c.km));

	printf("1. 모델:%s\n",c.model );
	printf("2. 번호판:%s\n", c.num);
	printf("3. 주행거리:%dkm", c.km);
	return 0;
}

//실습과제 4
#include<stdio.h>
struct coordinate
{
	int x;
	int y;
};
int main()
{
	struct coordinate dot1, dot2;
	printf("좌측상단 좌표 입력:");
	scanf("%d %d", &dot1.x, &dot1.y);

	printf("우측하단 좌표 입력:");
	scanf("%d %d", &dot2.x, &dot2.y);

	printf("사각형의 폭: %d\n", dot2.x - dot1.x);
	printf("사각형의 높이: %d", dot2.y - dot1.y);

	return 0;
}

//실습과제 5
#include<stdio.h>
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 };
	printf("교환전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	int p3x = p1.x;
	int p3y = p1.y;
	p1 = p2;
	p2.x = p3x;
	p2.y = p3y;
	printf("교환후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}
