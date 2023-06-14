#pragma once
#include <iostream>
using namespace std;

//클래스
class Player
{
	// 접근 지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를 제한하는 지정자

	//공개(public)
	//클래스 외부에서 어디서든지 접근할 수 있는 접근 제한자
public:
	const char* name;
	int data;

	void Information()
	{
		cout << "캐릭터 정보" << endl;
	}

	//비공개(private)
	//클래스 외부에서만 속성을 접근할 수 있으며, 클래스에 접근 지정자를 설정하지 않으면 비공개로 설정
private:
	int hp;


	//보호(protected)
	//클래스 내부와 자신이 상속하고 있는 클래스까지만 클래스의 속성을 접근할 수 있는 접근 제한자
protected:
	float transformX;

};

class Job : public Player
{
public:
	void Select()
	{
		transformX = 100.0f;
	}
};

int main()
{
#pragma region 클래스
	// Player player1;
	// Player player2;
	// Player player3;
	// 
	// //player.hp = 0;
	// player1.data = 10;
	// int* ptr = &player1.data;
	// 
	// player1.name = "Bard";
	// player1.Information();
	// 
	// //cout << "player1의 크기: " << sizeof(player1) << endl;
	// //cout << "player2의 크기: " << sizeof(player2) << endl;
	// //cout << "player3의 크기: " << sizeof(player3) << endl;


	// Player * ptr = new Player;
	// ptr->data = 19;
	// cout << ptr << endl;
	// ptr->Information();
	// 
	// delete ptr;
	// 
	// ptr = nullptr;
	// 
	// if (ptr == nullptr)
	// {
	// 	cout << "메모리가 해제됨" << endl;
	// 	ptr = new Player;
	// }
	// 
	// cout << ptr << endl;
#pragma endregion
	return 0;
}