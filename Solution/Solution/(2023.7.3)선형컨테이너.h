#pragma once
#include <iostream>
//STL ���̺귯��
#include <array>
#include <vector>
#include <deque>

#include <conio.h>
#include <random>

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

using namespace std;

int life = 5;

int main()
{
#pragma region STL ǥ�� ���ø� ���̺귯��
	//C++���� ����� �� �ִ� �����̳� class�� �˰����� �Ϲ�ȭ���Ѽ� ����� �� �ִ� �ڷᱸ���� �����ϴ� ���̺귯��
	// ���� �����̳� std::array std::vector std::deque
	// �����̳� �����
	// ���� �����̳� 

	// std::array
	// std::array<int, 5> STLarray{ 1,2,3,4,5 };
	// STLarray[0] = 10;
	// cout << "STLarray�� ũ�� : " << STLarray.size() << endl;

	//std::vector
	// std::vector<int> vector;
	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	// vector.push_back(60);
	// vector.push_back(70);
	// 
	// vector.pop_back();
	// vector.pop_back();
	// vector.pop_back();
	// vector.pop_back();
	// vector.pop_back();
	// 
	// cout << vector.capacity() << endl;
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << endl;
	// }

	//std::deque
	//std::deque<int> deque;
	//
	//deque.push_back(10);
	//deque.push_front(20);
	//
	//deque.pop_front();

	//empty(): �����̳ʰ� ����ִ� �� Ȯ���ϴ� �Լ�
	//����ִ� -> true
	//�� ����ִ� -> false ��ȯ
	std::cout << deque.empty() << std::endl;

	for (int i = 0; i < deque.size(); i++)
	{
		std::cout << deque[i] << std::endl;
	}

	//���� ����
	/*
	int spawnCount = 5;
	char key = 0;
	vector<int> vector;

	srand(time(NULL));
	for(int i = 0;i<spawnCount;i++)
		vector.push_back(rand() % 4);

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
				key = _getch();

			if (key == RIGHT)
			{
				if (vector.back() == 0)
					vector.pop_back();
				else
					life--;
			}
			else if (key == LEFT)
			{
				if (vector.back() == 1)
					vector.pop_back();
				else
					life--;
			}
			else if (key == UP)
			{
				if (vector.back() == 2)
					vector.pop_back();
				else
					life--;
			}
			else if (key == DOWN)
			{
				if (vector.back() == 3)
					vector.pop_back();
				else
					life--;
			}
		}

		if (life <= 0)
		{
			break;
		}

		if (vector.size() <= 0)
		{
			spawnCount += 2;
			for (int i = 0; i < spawnCount; i++)
				vector.push_back(rand() % 4);
		}

		//���
		cout << "life: " << life << endl;
		for (int i = 0; i < vector.size(); i++)
		{
			if(vector[i] == 0)
				cout << "�� ";
			if (vector[i] == 1)
				cout << "�� ";
			if (vector[i] == 2)
				cout << "�� ";
			if (vector[i] == 3)
				cout << "�� ";
		}
		system("cls");
	}

	cout << "Game Over" << endl;
	*/

	return 0;
}

