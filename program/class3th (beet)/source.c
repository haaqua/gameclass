# include<stdio.h>

void main()
{
#pragma region ��� ������

	//int storage1 = 0;
	//int storage2 = 0;
	//int storage3 = 0;
	//int storage4 = 0;
	//int storage5 = 0;
	//int x = 10;
	//int y = 5;
	//int z = 1;
	//int w = 10;

	//const int constant = 5;

	//// 1. ���� = ���� + ����
	//int su1 = 5;
	//int su2 = 9;
	//printf("���� + ���� = %d\n", su1 + su2);

	//storage1 = x + y;
	// 
	//// 2. ���� = ���� - ���ͷ� ���
	//int num1 = 8;
	//printf("���� - ���ͷ� ��� = %d\n", num1 - 5);

	//storage2 = z - 1;
	// 
	//// 3. ���� = ���� * �ɺ� ���
	//int var1 = 9;
	//const int sim1 = 5;
	//printf("���� * �ɺ� ��� = %d\n", var1 * sim1);

	//storage3 = w * constant;
	// 
	//// 4. ���� = ���ͷ� ��� / ���ͷ� ���
	//int var2 = 10 / 2;
	//printf("���ͷ� ��� / ���ͷ� ��� = %d\n", var2);

	//storage4 = 20 / 5;
	//
	//// 5. ���� = �ɺ��� ��� % ���ͷ� ���
	//const int sim2 = 20;
	//printf("�ɺ��� ��� % ���ͷ� ��� = %d\n", sim2 % 4);

	//storage5 = constant % 5;

	//printf("storage1 : %d", storage1);
	//printf("storage2 : %d", storage2);
	//printf("storage3 : %d", storage3);
	//printf("storage4 : %d", storage4);
	//printf("storage5 : %d", storage5);
#pragma endregion



#pragma region ��Ʈ
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0�Ǵ� 1�� ��������
	// �� ����� �����ϴ� �ܰ��Դϴ�


#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	// 10������ 1�� �ɶ����� ��� 2�� ������ �� ����
	// ���� ��ġ�� ������ ���� �Ʒ����� ���� ������� �����մϴ�.
	// ex)23    �� 2������ �ٲٸ� 10111(2)
	//    11 1
	//	  5  1
	//	  2  1
	//	  1  0


#pragma endregion

#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	//1 byte�� 2������ ����� ���� 2�� �������� ��Ÿ���ϴ�.

	// ������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� �����
	// ���� ������ ��Ʈ�� ��� ���ϸ� 10������ ��Ÿ���ϴ�.
#pragma endregion


#pragma region ��Ʈ������
	// ��Ʈ������ �������� �����ϱ� ���� ����ϴ� �������Դϴ�

#pragma region AND������
	// �ΰ��� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�
	// ��ȣ : &

	//int su1 = 10; // 0000 1010
	//int su2 = 6;  // 0000 0110
	//			  // ---------
	//              // 0000 0010

	//printf("su1 & su2 = %d\n", su1 & su2);

#pragma endregion

#pragma region OR ������
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִ٤Ӹ� 1�� ��ȯ�ϴ� �������Դϴ�
	// ��ȣ : |

	//int num1 = 8;  // 0000 1000
	//int num2 = 12; // 0000 1100
	//               // ---------
	//               // 0000 1100 => 12
	//printf("num1 | num2 = %d\n", num1 | num2);

#pragma endregion

#pragma region XOR ������
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ� 
	// ���� �ٸ��� 1�� ��ȯ�ϴ� �������Դϴ�.
	// ��ȣ : ^

	//int a1 = 6;  // 0000 0110
	//int a2 = 15; // 0000 1111
	//			 // ---------
	//			 // 0000 1001

	//printf("a1 ^ a2 = %d\n", a1 ^ a2);

#pragma endregion

#pragma region NOT ������
	// �ϳ��� ��Ʈ�� ������Ű�� �������Դϴ�.
	// ��ȣ : ~

	//int z1 = 13; // 0000 1101
	//             // ---------
	//             // 1111 0010 => -14
	//printf("~z1 = %d", ~z1);

	//ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ�� 1�� �ִٸ� ���� �����Դϴ�.

#pragma endregion



#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� ������ ����ŭ �̵���Ű�� �������Դϴ�
	// ��ȣ : ���� << �̵��� �� , �̵��� �� >> ����

	//int data = 5;           // 0000 0101
	//int shift1 = data << 2; // 0001 0100
	//printf("shift1�� �� : %d\n", shift1);

	//int shift2 = data >> 1; // 0000 0010
	//printf("shift2�� �� : %d\n", shift2);

#pragma endregion

#pragma endregion

}