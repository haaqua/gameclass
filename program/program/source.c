#include<stdio.h>
void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ���ۤ���
	// �����ϵ��� �����ϴ� ��ɹ��Դϴ�

#pragma region ���� ������
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������
	//��Ÿ���� �������Դϴ�

	// ���� �����ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� �� 0�̶�� ������ ��ȯ�˴ϴ�

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


#pragma region if ��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�

	//if���� ������ 1 �϶� ����Ǹ� 0�� �� ������� �ʽ��ϴ�
	//int health = 0;
	//if (health <= 0) 
	//{
	//	printf("YOU DIE\n");
	//}

#pragma endregion

#pragma region else if��
	// if���� ������ Ʋ�� �� if���� ������ �´ٸ�
	// ����Ǵ� ��ɹ��Դϴ�

	// else if���� ���� �� ������ �� ������, if���� ������ ��
	// ����� �� �ֽ��ϴ�
	//int level = 101;
	//if (level==100) 
	//{
	//	printf("���̻� ����� �� �� �����ϴ�");
	//}
	//else if (level<=101) 
	//{
	//	printf("�ִ� ������ �پ�Ѿ�����. �� ������ ��Ŀ��");
	//}
#pragma endregion

#pragma region else��
	// if���� else if���� ������ �� Ʋ���� 
	// ����Ǵ� ��ɹ��Դϴ�

	//int a = 10;

	//if (a > 0) 
	//{
	//	printf("a�� �����\n");
	//}

	//else if (a < 0) 
	//{
	//	printf("a�� ������\n");
	//}
	//else 
	//{
	//	printf("a�� ����� ������ �ƴϴ�\n");
	//}

	// if���� ����� ��� ���ǹ��� ������ ���� ��
	// ���� ���� �ִ� ���ǹ��� ����˴ϴ�
#pragma endregion

#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�

	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, 
	// break���� ������ ������ �ؿ� �ִ� case������ ��� �����Ű�ٰ� �����մϴ�

	char grade = 'B';

	switch (grade) 
	{
	case 'A': printf("100 ~ 90�� �Դϴ�\n");
		break;
	case 'B': printf("89 ~ 80�� �Դϴ�\n");
		break;
	case 'C': printf("79 ~ 70�� �Դϴ�\n");
		break;
	case 'D': printf("69 ~ 60�� �Դϴ�\n");
		break;
	case 'E': printf("59 ~ 50�� �Դϴ�\n");
		break;
	case 'F': printf("50�� �̸��Դϴ�\n");
		break;
	default: printf("Exception\n");
	}
	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵��մϴ�
#pragma endregion



#pragma endregion

}