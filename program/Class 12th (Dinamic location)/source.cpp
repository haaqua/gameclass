#include<stdio.h>
#include<stdlib.h>


int main()
{
#pragma region 동적 할당
	// 프로그램이 실행하는 중에 필요한 만큼 메모리를 할당하는 작업입니다

	//int* pointer = malloc(4);

	//*pointer = 10;

	//printf("pointer가 가리키는 값 : %d\n", *pointer);

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경할 수 있으며, 
	// 동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정합니다

	//free(pointer);
	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로, 
	// 사용이 끝나면 직접 해제해주어야 합니다

#pragma endregion

#pragma region 과제
	// int를 저장할 수 있는 3개짜리 배열을 만들기
	//pointer = (int*)malloc(sizeof(int) * 3);
	// 만든 배열에 10, 20, 30 집어넣기
	//pointer[0] = 10;
	//pointer[1] = 20;
	//pointer[2] = 30;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("pointer[%d] : %d\n", i, pointer[i]);
	//}

	// 한번씩 출력하고 메모리 해제하기
	//free(pointer);
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터 입니다

	//int *address = malloc(sizeof(int));
	//*address = 100;
	//printf("address : %d\n\n", *address);
	//free(address);

	//*address = 99;
	//printf("address : %d\n", *address);

#pragma endregion

	return 0;
}