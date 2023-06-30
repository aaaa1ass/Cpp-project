#pragma once
#include <iostream>
#include "../Class Header/Sword.h"

using namespace std;

#pragma region ���� ���� ���ø�
template <typename T>
void TemplatePrintf(T arg)
{
	cout << arg << endl;
}

template <typename T, typename ... Types>
void TemplatePrintf(T arg, Types ... args)
{
	cout << arg << ", ";
	TemplatePrintf(args...);
	cout << endl;
}
#pragma endregion


int main()
{
#pragma region �ٿ� ĳ����
	//Weapon * weapon = new Sword;// �� ĳ����
	//weapon->Attack();
	//weapon->Stat();
	//
	//Sword* sptr = (Sword*)weapon;// �ٿ� ĳ����
	//sptr->Attack();
	//sptr->Stat();
#pragma endregion

#pragma region ��� �̴ϼȶ�����
	Weapon weaponItem(10, 5.5f, 1000);
#pragma endregion

#pragma region ���� ���� ���ø�
	TemplatePrintf(10, 20, 30);
	TemplatePrintf(1, 2, 3, 4, 5, 6, 7);
#pragma endregion


	return 0;
}

