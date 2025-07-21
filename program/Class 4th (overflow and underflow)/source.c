#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최대값의 범위를 
	// 넘어서 연산을 수행하는 과정입니다

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력됩니다

	//char storage = 127 + 1; // 0111 1111
	//                        //+        1
	//						  // 1000 0000 => -128
	//printf("storage = %d\n", storage);
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정입니다

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며, 
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력됩니다

	//char data = -128 - 1;  // 1000 0000
							 //-        1
							 // 0111 1111
	//printf("data : %d\n", data);

#pragma endregion

#pragma region 부호 없는 자료형

	//unsigned int count = 4294967295;

	//// [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	//printf("signed count 변수의 값: %d\n", count);

	//// [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	//printf("unsigned count 변수의 값: %u\n", count);

#pragma endregion

#pragma region 실수를 표기하는 방법

	//float decimal = 3.1f;
	//double x = 3.1;
	//// 정수형 리터럴 상수는 지정하는 값의 변화가 크진 않지만
	//// int 자료형으로 지향되며, 실수형 상수는 double 자료형으로 저장됩니다

	//printf("decimal 변수의 값 : %f\n", decimal);
	//printf("x 변수의 값 : %.16lf\n", x);

	//// 표준 출력 함수로 출력 될 때 4 byte 크기의 실수형
	//// 자료형은 소수점 이하 6자리까지만 표기하며, 8 byte 크기의
	//// 실수형 자료형은 소수점 이하 15자리까지만 표기됩니다.

#pragma endregion
}