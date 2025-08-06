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

struct coor
{
	double x;
	double y;
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
	struct coor data;

	data.x = (1, 5);
	data.y = (1, 7);
	sqrt(data.x[0] - data.y[0]);
	sqrt(data.x[1] - data.y[1]);

#pragma endregion



	return 0;
}