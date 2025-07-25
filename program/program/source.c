﻿#include <stdio.h>
void main() 
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를 의미하며,
	// 메모리 공간은 3 byte 크기로 나누어 표현합니다

	//int data = 10;
	//printf("값 : %p\n", &data);

#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 
	// 여러 종류의 데이터를 
	// 다양한 서식에 맞추어 입력해주는 함수입니다
	//int x = 0;
	//printf("x의 값을 입력하시오 : ");
	// 표준 입력함수는 입력을 수행할 때까지 다음 함수로 넘어갈 수 없습니다
	

	//scanf_s("x 변수의 값 : %d\n", &x);
	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 의해 입력될 수 있는 데이터의 범위도 결정됩니다

	//printf("x 변수의 값 : %d\n", x);
	// 표준 입력 함수로 데이터를 입력하게 되면 
	// 버퍼에 데이터를 보관하였다가 
	// 입력되는 순간 버퍼안에 내용을 프로그램에 전송됩니다

#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다

	int storage = 10;
	
	int variable = 20;
	
	int * pointer=&storage;

	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없음으로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다

	printf("storage 변수의 주소 : %p\n", &storage);
	printf("pointer 값 : %p\n", pointer);
	printf("pointer 변수의 주소 : %p\n\n", &pointer);

	*pointer = 99;
	printf("storage 변수의 값 : %d\n", storage);
	printf("pointer 변수가 가리키는 값 : %d\n\n", *pointer);

	
	pointer = &variable;
	printf("variable 변수의 주소 : %p\n", &variable);
	printf("pointer 값 : %p\n", pointer);
	printf("pointer 변수의 주소 : %p\n\n", &pointer);

	*pointer = 100;
	printf("variable 변수의 값 : %d\n", variable);
	printf("pointer 변수가 가리키는 값 : %d\n", *pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 
	// 해당 변수의 시작 주소를 가리키게 됩니다

	printf("int 자료형의 크기 : %u\n", sizeof(int));
	printf("pointer 변수의 크기 : %u\n", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장치가 한번에 처리할 수 있는 크기로 정해지며, 
	// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다

#pragma endregion

#pragma region 복합대입연산자 (숙제)
	// 복합대입연산자에 대한것 찾고 간단한 계산기 만들기
#pragma endregion




}