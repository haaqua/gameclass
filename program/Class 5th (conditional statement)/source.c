// Class 5th (conditional statement).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include<stdio.h>
void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작ㅇ을
	// 수행하도록 실행하는 명령문입니다

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로
	//나타내는 연산자입니다

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 변환되며,
	// 조건이 틀릴 때 0이라는 값으로 변환됩니다

	//int x = 10;
	//int y = 20;
	//printf("x < y %d\n", x < y);
	//printf("x > y %d\n", x > y);
	//printf("x < y %d\n", x < y);
	//printf("x <= y %d\n", x <= y);
	//printf("x >= y %d\n", x >= y);
	//printf("x != y %d\n", x != y);
	//printf("x == y %d\n", x == y);

#pragma endregion


#pragma region if 문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문입니다

	//if문은 조건이 1 일때 실행되며 0일 때 실행되지 않습니다
	//int health = 0;
	//if (health <= 0) 
	//{
	//	printf("YOU DIE\n");
	//}

#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 if문의 조건이 맞다면
	// 실행되는 명령문입니다

	// else if문은 여러 번 정의할 수 있으며, if문이 존재할 때
	// 사용할 수 있습니다
	//int level = 101;
	//if (level==100) 
	//{
	//	printf("더이상 레밸업 할 수 없습니다");
	//}
	//else if (level<=101) 
	//{
	//	printf("최대 레밸을 뛰어넘었군요. 이 더러운 해커야");
	//}
#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면 
	// 실행되는 명령문입니다

	//int a = 10;

	//if (a > 0) 
	//{
	//	printf("a는 양수다\n");
	//}

	//else if (a < 0) 
	//{
	//	printf("a는 음수다\n");
	//}
	//else 
	//{
	//	printf("a는 양수도 음수도 아니다\n");
	//}

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다
#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다

	// switch문은 해당 조건이 완료되었을 때, 
	// break문이 없으면 나머지 밑에 있는 case문까지 계속 실행시키다가 종료합니다

	//char grade = 'B';

	//switch (grade) 
	//{
	//case 'A': printf("100 ~ 90점 입니다\n");
	//	break;
	//case 'B': printf("89 ~ 80점 입니다\n");
	//	break;
	//case 'C': printf("79 ~ 70점 입니다\n");
	//	break;
	//case 'D': printf("69 ~ 60점 입니다\n");
	//	break;
	//case 'E': printf("59 ~ 50점 입니다\n");
	//	break;
	//case 'F': printf("50점 미만입니다\n");
	//	break;
	//default: printf("Exception\n");
	//}
	// switch문의 경우 조건에 해당하는 값의 따라 조건의 위치가 이동합니다
#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다

//int score = 100;
//char rank = 1;
//if (score == 100 && rank == 1) {
//	printf("100점 랭크 1\n");
//}
#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중에서 하나라도 조건이 성립할 때 실행되는 연산자입니다
//int level = 1;
//int pet_level = 100;
//if (level >= 50 || pet_level >= 100) {
//	printf("입장조건이 달성 되었습니다.\n");
//}

#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다

//int power = 0;
//if (!power) {
//	printf("off");
// }

#pragma endregion


#pragma endregion

#pragma region 사분면

//int x = 13;
//int y = 1;
//if (x == 0 && y == 0) {
//	printf("원점\n");
//}
//else if (x == 0 && y != 0) {
//	printf("y절편\n");
//}
//else if (x != 0 && y == 0) {
//	printf("x절편\n");
//}
//else if (x > 0 && y > 0)  {
//	printf("제 1 사분면\n");
//}
//else if (x < 0 && y>0) {
//	printf("제 2 사분면\n");
//}
//else if (x < 0 && y < 0) {
//	printf("제 3 사분면\n");
//}
//else if (x > 0 && y < 0) {
//	printf("제 4 사분면\n");
//}

#pragma endregion

#pragma endregion

}