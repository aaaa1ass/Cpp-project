#pragma once
#include <iostream>
using namespace std;

//Ŭ����
class Player
{
	// ���� ������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� ������

	//����(public)
	//Ŭ���� �ܺο��� ��𼭵��� ������ �� �ִ� ���� ������
public:
	const char* name;
	int data;

	void Information()
	{
		cout << "ĳ���� ����" << endl;
	}

	//�����(private)
	//Ŭ���� �ܺο����� �Ӽ��� ������ �� ������, Ŭ������ ���� �����ڸ� �������� ������ ������� ����
private:
	int hp;


	//��ȣ(protected)
	//Ŭ���� ���ο� �ڽ��� ����ϰ� �ִ� Ŭ���������� Ŭ������ �Ӽ��� ������ �� �ִ� ���� ������
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
#pragma region Ŭ����
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
	// //cout << "player1�� ũ��: " << sizeof(player1) << endl;
	// //cout << "player2�� ũ��: " << sizeof(player2) << endl;
	// //cout << "player3�� ũ��: " << sizeof(player3) << endl;


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
	// 	cout << "�޸𸮰� ������" << endl;
	// 	ptr = new Player;
	// }
	// 
	// cout << ptr << endl;
#pragma endregion
	return 0;
}