#pragma once
#include <iostream>
#include "../Class Header/Sword.h"

using namespace std;

#pragma region 가변 길이 템플릿
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
#pragma region 다운 캐스팅
	//Weapon * weapon = new Sword;// 업 캐스팅
	//weapon->Attack();
	//weapon->Stat();
	//
	//Sword* sptr = (Sword*)weapon;// 다운 캐스팅
	//sptr->Attack();
	//sptr->Stat();
#pragma endregion

#pragma region 멤버 이니셜라이져
	Weapon weaponItem(10, 5.5f, 1000);
#pragma endregion

#pragma region 가변 길이 템플릿
	TemplatePrintf(10, 20, 30);
	TemplatePrintf(1, 2, 3, 4, 5, 6, 7);
#pragma endregion


	return 0;
}

