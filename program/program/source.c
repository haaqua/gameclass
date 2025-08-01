#include<stdio.h>

void test() {
	printf("test\n");
}

float get_temperture() 
{
	return 36.5f;
}

void attack(int attack_level) 
{
	if (attack_level > 0) {
		printf("공격성공");
	}
	else if (attack_level < 0) {
		printf("공격실패");
	}
}

void print_status(char name, int health, int str) {
	printf("이름 : %c\n", name);
	printf("hp : %d\n", health);
	printf("근력 : %d\n", str);
}

void swap(int * a, int * b) 
{
	
	int x = * a;
	*a = * b;
	*b = x;
}

void find(int count)
{
	if (count <= 0) {
		return;
	}
	printf("%d\n", count);
	count = count - 1;
	find(count);
}

void main() 
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다

	//test();

#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다

//	printf("온도 : %f\n", get_temperture());

	//함수의 경우 자료형과 반환하는 값의 형태가 
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다
#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 
	// 함수 내부로 전달하기 위해 사용하는 함수입니다

//	attack(35);

	// 매개 변수는 함수내부에서만 연산이 이루어지며, 
	// 함수가 종료되면 메모리에서 해제됩니다

//	print_status('ak', 150, 5);

	//하나의 함수에 서로 다른 자료형의 매계변수를 함께 정의할 수 있으며,
	// 여러 개의 매계 변수를 생성할 수 있습니다
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실재로 전달되는 함수입니다

//	int x1 = 10;
//	int x2 = 20;
//
//	swap(&x1, &x2);
//
//	printf("x1 : %d, x2 : %d\n", x1, x2);

	// 인수에 경우 함수에 있는 매개 변수에 따라 전달될 수 있는 인수의 수가 결정되며, 
	// 값을 전달하는 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야 합니다
#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다

//	find(3);
	
	// 재귀 함수는 함수를 계속하기 때문에 
	// 스택 영역에 메모리가 계속 쌓이게 되므로 
	// 스택 오버플로우가 발생합니다
#pragma endregion
}