#pragma once
#include <iostream>
#include "Class Header/Marine.h"
#include "Class Header/Sword.h"

using namespace std;

int main()
{
#pragma region ���� ga�� �Լ�
	////�ϳ��� ���� ���� �Լ��� ������ Ŭ������ �߻� Ŭ������ ���ǵȴ�
	//	//Unit unit;
	//
	//	//�߻� Ŭ������ ������ Ÿ������ ����� �� �ִ�
	//	//Unit * ptr;
	//
	//	Marine marine;
	//	marine.Skill();
	//
	//	//���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��Ѵ�
	//	cout << "Marine ��ü ũ��: " << sizeof(marine) << endl;
#pragma endregion

#pragma region ga�� �Ҹ���
	// //��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ��� ȣ��Ǵ� �Ҹ���
	// 
	// Weapon* ptr = new Sword;
	// ptr->Attack();
	// 
	// //��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����ž� �ϱ� ������ ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �Ѵ�
	// delete ptr;
#pragma endregion

	//���� Ŭ������ ������ ���� �� �ִ� ��ü�� ����Ŭ������ �ڷ����� �ο��ؼ�, ����Ŭ����ó�� ����ϰ� �ϴ� ���̴�
	Sword s1;
	Weapon w1 = s1;

	return 0;
}

