// **********************************************************
//   제  목  :  ch16-1 실습과제
//   날  짜  :  2026년 10월 1일
//   작성자  :  2600104 송은석
// **********************************************************


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//실습과제 1
#include <stdio.h>
int main(void) 
{
	int x1[2][2] = { { 2, 4 }, { 5, -5 } };
	int x2[2][2] = { { -2, 3 }, { 0, -5 } };
	int x3[2][2];
	printf("연산 결과: \n");
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++) 
		{
			*(*(x3 + i) + j) = *(*(x1 + i) + j) + *(*(x2 + i) + j);
			printf("%d\t", *(*(x3 + i) + j));
		}
		printf("\n");
	}
	return 0;
}

//실습과제 2
#include <stdio.h>
int main(void) 
{
	int score[3][3];
	int ave[3];
	int i, max, first;
	for (i = 0; i < 3; i++) 
	{
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
		ave[i] = (score[i][0] + score[i][1] + score[i][2]) / 3;
	}
	max = ave[0];
	first = 0;
	for (i = 1; i < 3; i++)
		if (ave[i] > max) 
		{
			max = ave[i];
			first = i;
		}
	printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다. \n", first + 1, max);
	return 0;
}

//실습과제 3
#include <stdio.h>

int main(void) {
	int x1[3][3] = { { -5, 2, 35 }, { -20, 5, 100 }, { -75, 5, -25 } };
	int max = x1[0][0];
	int row = 1, column = 1;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (x1[i][j] > max) {
				max = x1[i][j];
				row = i + 1;
				column = j + 1;
			}

	printf("최댓값은 %d \n", max);
	printf("위치는 %d행 %d열 \n", row, column);

	return 0;
}

//실습과제 4
#include <stdio.h>
int main(void) 
{
	char str[4][10];
	int i, j;
	int x1[4];
	for (i = 0; i < 4; i++) 
	{
		j = 0;
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
		while (str[i][j] != '\0')
			j += 1;
		x1[i] = j;
	}
	for (i = 0; i < 4; i++)
		printf("%d번째 문자열 길이: %d \n", i + 1, x1[i]);
	return 0;
}

//실습과제 5
#include <stdio.h>
int main(void) 
{
	char str[4][10];
	int i, last = 0;
	for (i = 0; i < 4; i++) 
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (i = 1; i < 4; i++)
		if (str[i][0] > str[last][0])
			last = i;
	printf("사전에서 제일 뒤에 나오는 문자열: %s \n", &str[last][0]);
	return 0;
}
