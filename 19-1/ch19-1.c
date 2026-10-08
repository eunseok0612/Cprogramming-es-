// **********************************************
// 제 목 : ch 19-1 실습과제
// 날 짜 : 2026년 10월8일
// 작성자 : 2600104 송은석
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
//실습과제 2-1
#include <stdio.h>
// 두 개의 int를 받아서 int를 반환하는 함수 포인터 타입 정의
typedef int (*Operation)(int, int);
// 덧셈 함수
int add(int a, int b) {
    return a + b;
}
// 곱셈 함수
int multiply(int a, int b) {
    return a * b;
}
// 함수 포인터를 매개변수로 받는 함수
void execute(Operation op, int x, int y) {
    printf("결과: %d\n", op(x, y));
}
int main() {
    // add 함수 포인터 전달
    execute(add, 3, 4);       // 결과: 7

    // multiply 함수 포인터 전달
    execute(multiply, 3, 4);  // 결과: 12

    return 0;
}

//실습과제 2-2
#include <stdio.h>
// void* 포인터를 매개변수로 받아 출력하는 함수
void printValue(void* ptr, char type) {
    switch (type) {
    case 'i': // int
        printf("int 값: %d\n", *(int*)ptr);
        break;
    case 'f': // float
        printf("float 값: %.2f\n", *(float*)ptr);
        break;
    case 'c': // char
        printf("char 값: %c\n", *(char*)ptr);
        break;
    default:
        printf("알 수 없는 타입\n");
    }
}
int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'X';

    // 각각 다른 타입을 void*로 전달
    printValue(&a, 'i');  // int 값: 10
    printValue(&b, 'f');  // float 값: 3.14
    printValue(&c, 'c');  // char 값: X

    return 0;
}

//실습과제 3
#include <stdio.h>
// 연산 함수들
int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return b != 0 ? a / b : 0; }

// 공통 출력 함수
void CalculateAndShow(int x, int y, int (*op)(int, int), char* opName)
{
    printf("%d %s %d = %d\n", x, opName, y, op(x, y));
}

int main(void)
{
    int num1 = 20, num2 = 10;

    // 함수포인터 배열
    int (*operations[4])(int, int) = { Add, Sub, Mul, Div };
    char* opNames[4] = { "+", "-", "*", "/" };

    // 공통 함수 호출
    for (int i = 0; i < 4; i++)
    {
        CalculateAndShow(num1, num2, operations[i], opNames[i]);
    }

    return 0;
}