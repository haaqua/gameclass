#include<stdio.h>

// main() : 프로그램의 진입점을 역할을 하는 함수입니다
void main()
{
#pragma region 변수
// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다

#pragma endragion

#pragma region 자료형 

	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다
	
	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의 크기는 바이트 단위로 이루어져있고
	// 자료형에 따라 저장할 수 있는 값의 종류와 범위가 결정됩니다
#pragma endragion

#pragma region 서식 지정자
	// 변수의 값이 추력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다
	
	//서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을 넣을 수 있으며,
	//서식 지정자의 순서는 왼쪽에서 시작합니다

	//서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할 수 있으며, 서식과 변수의
	//형태가 일치하지 않으면 원하는 값이 출력되지 않습니다

	//char alphabet = 'A';

	//int integer = 100;

	//float declimal = 36.5;

	//printf("alphabet : %c\n", alphabet);

	//printf("integer : %i\n", integer);

	//printf("declimal : %f\n", declimal);
#pragma endregion

#pragma region 변수의 이동 규칙


    // 1. 변수의 이름은 대소문자를 구분합니다.
	// ex) int health = 100;
	// ex) int HEALTH = 20;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다
	// ex) int int;

	// 3.변수의 이름에는 공백이 포함될 수 없습니다
	//ex) float time Delay

	// 4. 변수의 이름으로 특수 문자는 "_", "$"만 사용할 수 있습니다

	// ex) int under_score;
	// ex) int currentRoom$;

	// 5. 변수의 이름은 숫자로 시작할 수 없습니다
	// ex) int 5error;
	// ex) int error2025;

#pragma endregion

	int experience = 100;

	experience = 200;

	printf("experience : %d\n", experience);

	//변수는 프로그램이 실행되는 동안 값을 바꿀수 없으며, 원래 지정되어 있는 값은 새로 지정되는 값에 의해 지워집니다
#pragma endragion


}