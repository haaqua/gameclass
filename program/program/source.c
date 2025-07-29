#include <stdio.h>
void main() 
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다

//	int ca[5];
//	
//	//배열의 첫번째 원소는 0부터 시작합니다
//
//	for (int i = 0; i<5; i++) 
//	{
//		ca[i] = (i+1) * 10;
//		printf("ca[%d] = %d\n", i, ca[i]);
//	}
	// 배열의 메모리 공간은 프로그램이 실행되는 동안 변경할 수 없습니다

	int li[] = {1, 2, 3, 4, 5};
	int size = sizeof(li) / sizeof(li[0]);
	for (int i = 0; i < size; i++) {
		printf("li[%d]의 값 : %d\n", i, li[i]);
	}

	// 배열의 크기는 생략할 수 있으며,
	// 초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정됩니다

	printf("배열의 시작 주소 : %p\n\n", li);

	// 배열은 연속적인 메모리 공간을 가지고 있으며,
	// 배열의 이름은 배열의 시작 주소를 가리킵니다

	int* pointer = li[1];
	pointer = pointer + 1;
	printf("li[1]의 값 : %d\n", li[1]);
	printf("pointer의 값 : %d\n\n", pointer);

#pragma endregion

}
