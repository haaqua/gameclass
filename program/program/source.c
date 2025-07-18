# include<stdio.h>

void main()
{
#pragma region 산술 연산자
	// 1. 변수 = 변수 + 변수
	int su1 = 5;
	int su2 = 9;
	printf("변수 + 변수 = %d\n", su1 + su2);
	 
	// 2. 변수 = 변수 - 리터럴 상수
	int num1 = 8;
	printf("변수 - 리터럴 상수 = %d\n", num1 - 5);
	 
	// 3. 변수 = 변수 * 심블럭 상수
	int var1 = 9;
	const int sim1 = 5;
	printf("변수 * 심블럭 상수 = %d\n", var1 * sim1);
	 
	// 4. 변수 = 리터럴 상수 / 리터럴 상수
	int var2 = 10 / 2;
	printf("리터럴 상수 / 리터럴 상수 = %d\n", var2);
	
	// 5. 변수 = 심볼릭 상수 % 리터럴 상수
	const int sim2 = 20;
	printf("심볼릭 상수 % 리터럴 상수 = %d\n", sim2 % 4);
	
#pragma endregion



#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0또는 1의 조합으로
	// 논리 계산을 수행하는 단계입니다

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정령합니다.
	// ex)23    을 2진수로 바꾸면 10111(2)
	//    11 1
	//	  5  1
	//	  2  1
	//	  1  0


#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	//1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하며 10진수로 나타냅니다.
#pragma endregion


#pragma region 비트연산자
	// 비트단위로 논리연산을 수행하기 위해 사용하는 연산자입니다

#pragma region AND연산자
	// 두개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다
	// 기호 : &

	//int su1 = 10; // 0000 1010
	//int su2 = 6;  // 0000 0110
	//			  // ---------
	//              // 0000 0010

	//printf("su1 & su2 = %d\n", su1 & su2);

#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다ㅣ면 1을 반환하는 연산자입니다
	// 기호 : |

	//int num1 = 8;  // 0000 1000
	//int num2 = 12; // 0000 1100
	//               // ---------
	//               // 0000 1100 => 12
	//printf("num1 | num2 = %d\n", num1 | num2);

#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고 
	// 서로 다르면 1을 반환하는 연산자입니다.
	// 기호 : ^

	//int a1 = 6;  // 0000 0110
	//int a2 = 15; // 0000 1111
	//			 // ---------
	//			 // 0000 1001

	//printf("a1 ^ a2 = %d\n", a1 ^ a2);

#pragma endregion

#pragma region NOT 연산자
	// 하나의 비트를 반전시키는 연산자입니다.
	// 기호 : ~

	//int z1 = 13; // 0000 1101
	//             // ---------
	//             // 1111 0010 => -14
	//printf("~z1 = %d", ~z1);

	//첫 번째 비트는 부호를 나타내며, 첫 번째 비트에 1이 있다면 값은 음수입니다.

#pragma endregion

	

#pragma endregion



#pragma endregion

}