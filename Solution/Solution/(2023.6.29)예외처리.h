#pragma once
#include <iostream>
#include "../Class Header/Tiger.h"
#include "../Class Header/Lion.h"

using namespace std;

int main()
{
#pragma region ���� ó��
	// int a;
	// int b;
	// int result = 0;
	// 
	// cin >> a >> b;
	// 
	// try
	// {
	// 	if (b == 0)
	// 	{
	// 		throw invalid_argument("������ 0�� �� �� ����.");
	// 	}
	// 	cout << "��� ����" << endl;
	// 	result = a / b;
	// }
	// catch (const std::exception & error)
	// {
	// 	cout << error.what() << endl;
	// }
	// catch (int errorID)
	// {
	// 	cout << errorID << endl;
	// }
#pragma endregion

#pragma region final
//Ŭ������ ���� �Լ��� ���� Ŭ�������� �������� �� ������ �������ִ� ���
	// Animal animal;
	// animal.Action();
	// 
	// Carnivore carnivoer;
	// carnivoer.Action();
	// 
	// Tiger tiger;
	// tiger.Action();
#pragma endregion

#pragma region friend
	//�������� ������ Ŭ�������� ��� ������ ������ �� �ֵ��� �������ִ� ��� 
	Tiger tiger1;
	Lion lion1;

	tiger1.FriendFunction(lion1);
#pragma endregion

	return 0;
}

