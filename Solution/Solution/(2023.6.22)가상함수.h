#pragma once
//#include <iostream>
#include "Class Header/Sword.h"

using namespace std;

#pragma region �Լ��� �������̵�
//���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ� ����ϴ� ���
#pragma endregion


int main()
{
#pragma region �Լ��� �������̵�
	//�Լ��� �������̵�� ��� ���迡���� �̷������ ���� Ŭ������ ���� Ŭ������ �Լ��� ���°� ��ġ�ؾ� �Ѵ�
		// Weapon weapon;
		// weapon.Attack();
		// 
		// Sword sword;
		// sword.Attack();
		// 
		// // ���ε�
		// // ���α׷��� � �⺻ ������ ���� �� �ִ� ���� ����� ��ü���� ���� �������� ����
		// weapon = sword;
		// weapon.Attack();
#pragma endregion

#pragma region ga�� �Լ�
// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� �����ǵ� �� �ִ� �Լ�
	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������, ���� �����ڴ� ������ �����ؾ� �Ѵ�

	Weapon* ptr = new Sword;
	ptr->Attack();
	//���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ� ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, �������� ����� �Լ��� ���� �Լ��� ������ �� �ִ�
	ptr->Stat();
#pragma endregion


	return 0;
}

