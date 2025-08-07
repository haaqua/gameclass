#include<stdio.h>
#include<math.h>

struct status
{
	const char* name;
	int health;
	int defence;
	int level;
	double exp;
	int str;
	int dex;
	int wis;
	int cha;
};

struct data 
{
	char grade;
	int health;
	double exp;
};

struct Ability 
{
	char rank;
	double attack;
	int defence;
	
};

struct coor
{
	double x[1];
	double y[1];
	double distance;
};

struct print2D 
{
	int x;
	int y;
};

struct Node 
{
	int data;
	struct Node* next;
};


int main() 
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음 
	// 하나의 객체를 생성하는 것입니다

	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화합니다
	// 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됩니다

	//struct status data;
	//data.name = "기사";
	//data.health = 10;
	//data.defence = 10;
	//data.level = 1;
	//data.exp = 0;
	//data.str = 10;
	//data.dex = 4;
	//data.wis = 4;
	//data.cha = 5;
	//printf("이름 : %s\nhp : %d df : %d\nlevel : %d\nexp : %d\nstr : %d\ndex : %d\nwis : %d\ncha : %d\n", data.name, data.health, data.defence, data.level, data.exp, data.str, data.dex, data.wis, data.cha);

	// 구조체를 선언하기 전에 구조체는 메모리공간이 생성되지 않으므로, 
	// 구조체 내부에 있는 데이터를 초기화할 수 없습니다

#pragma endregion

#pragma region 두 점 사이의 거리
	//struct coor data;

	//data.x[0] = 1;
	//data.x[1] = 5;
	//data.y[0] = 1;
	//data.y[1] = 7;
	//data.distance = sqrt((data.x[0] - data.x[1]) * (data.x[0] - data.x[1]) + (data.y[0] - data.y[1]) * (data.y[0] - data.y[1]));
	//if (data.distance > 5) {
	//	printf("공격불가능\n");
	//}
	//else if (data.distance <= 5) {
	//	printf("공격가능\n");
	//}
	//printf("두 점 사이의 거리 : %lf\n", data.distance);
	
	//struct print2D rouge = { 0,0 };
	//struct print2D slime = { 5,5 };

	//double x = rouge.x - slime.x;
	//double y = rouge.y - slime.y;
	//
	//double distance = sqrt(pow(x, 2) + pow(y, 2));

	//if (distance >= 5.0) 
	//{
	//	printf("공격 가능 거리\n");
	//}
	//else 
	//{
	//	printf("공격 불가능\n");
	//}

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록, 
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업입니다

//	printf("data 구조체의 크기 : %u\n", sizeof(struct data));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가 가장큰 자료형의 배수가 되도록 정렬합니다.

	//struct Ability ability = { 'A', 13.355, 5 };

	//printf("Ability 구조체의 크기 : %d\n", sizeof(struct Ability));

	// 구조체의 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가 다르게 설정될 수 있습니다

#pragma endregion

#pragma region 자기 참조 구조체

	struct Node node1 = { 10,NULL };
	struct Node node2 = { 20,NULL };
	struct Node node3 = { 30,NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct Node* currentNode = &node1;

	while(currentNode != NULL)
	{
		printf("curretnNode : %d\n", currentNode->data);

		currentNode = currentNode->next;
	}

#pragma endregion

	return 0;
}