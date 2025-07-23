﻿#include<stdio.h>
void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다
	
#pragma region 증강 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다



	// 전위 증감 연산자는 변수의 값을 증감 시킨 후에
	// 연산을 수행합니다
	//printf("전위 증감의 값 : \n");
	//int x = 0;
	//int y = 0;
	//y = ++ x;
	//printf("x의 값 : %d, y의 값 : %d\n", x, y);

	//x = --y;
	//printf("x의 값 : %d, y의 값 : %d\n", x, y);

	// 후위 증감 연산자는 연산을 수행한 후 변수의 값을 증감시킵니다
	//printf("후위 증감의 값 : \n");
	//int a = 0;
	//int b = 0;
	//b = a ++;
	//printf("a의 값 : %d, b의 값 : %d\n", a, b);

	//b = a --;
	//printf("a의 값 : %d, b의 값 : %d\n", a, b);

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 연산하는 반복문입니다
	//for(int i = 0; i<5; i++) 
	//{
	//	printf("%d번 적음\n", i+1);
	//}

#pragma endregion

#pragma region while 문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을
	// 실행하는 반복문입니다

	// while문의 경우 위에서 아래로 실행되며, 
	// 아래에 있는 명령문의 실행이 다 끝나면 
	// 다시 위에 있는 명령문으로 돌아가서 반복하는 구조입니다

	//int count = 5;
	//while (count > 0) 
	//{
	//	printf("count : %d\n", count);
	//	count --;
	//}

#pragma endregion

#pragma region DO-WHILE문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 
	// 조건에 따라 명령문을 실행하는 반복문입니다

	//int life = 10;
	//do
	//{
	//	printf("체력이 (%d)만큼 남았습니다\n", life);
	//	life--;
	//} 
	//while (life > 0);

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 
	// 반복문은 이어서 실행하는 제어문입니다
	//for (int i = 1; i <= 10; i++) 
	//{
	//	if (i % 3 == 0)
	//		continue;

	//	printf("%d ", i);
	//}

#pragma endregion

#pragma region 중첩 반복문
	// 반복문 안에 새로운 반복문이 들어 있는 형태의 반복문입니다

	for (int i = 0; i < 3; i++) 
	{
		printf("out...\n");
		for (int j = 1; j < 3; j++) 
		{
			printf("in...\n");
		}
	}

#pragma endregion

#pragma endregion

}