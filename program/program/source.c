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

#pragma region 매계변수
	// 함수의 정의에서 전달받은 인수를 
	// 함수 내부로 전달하기 위해 사용하는 함수입니다

	attack(35);

	// 매계변수는 함수내부에서만 연산이 이루어지며, 
	// 함수가 종료되면 메모리에서 해제됩니다

	//하나의 함수에 서로 다른 자료형의 매계변수를 함께 정의할 수 있으며,
	// 여러 개의 매계 변수를 생성할 수 있습니다
#pragma endregion


}