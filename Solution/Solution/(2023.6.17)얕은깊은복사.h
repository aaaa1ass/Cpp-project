#pragma once
#include <iostream>
#include "DataFile.h"
#include "stdafx.h"
using namespace std;

#pragma region ���� ����
// ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� ����

class GameObject
{
public:
	int size;
	int* data;
	static int deathCount;

	GameObject(int m_size)
	{
		size = m_size;
		data = new int[size];
	}

	GameObject(const GameObject& clone)
	{
		size = clone.size;
		data = new int[size];
	}

	~GameObject()
	{
		delete[] data;
		deathCount++;
		cout << "���� ������Ʈ�� �ı��� Ƚ��: " << deathCount << endl;
	}
};

int GameObject::deathCount = 0;
#pragma endregion

//�ܺ� ����
int globalValue = 100;

int main()
{
#pragma region ���� ����
	// //��ü�� ������ �� �ּڰ��� �����Ͽ� ���� �޸𸮸� ����Ű�� ����
	// 
	// int* ptr1 = new int;
	// int* ptr2 = ptr1;
	// 
	// 
	// *ptr1 = 100;
	// *ptr2 = 999;
	// 
	// cout << "ptr1�� ����Ű�� ��: " << *ptr1 << endl;
	// cout << "ptr2�� ����Ű�� ��: " << *ptr2 << endl;
	// 	// //���� ������ ��� ���� ��ü�� ���� ���� �޸� ������ �����ϰ� �ֱ� ������ �ϳ��� ��ü�� ���� �����ϰ� �Ǹ� ���� ������ ��ü�� ������ �޴´�

	// delete(ptr1);
	// //delete(ptr2);


#pragma endregion

#pragma region ���� ����
	// GameObject obj1(3);// data[] -> [][][]
	// obj1.data[0] = 111;
	// 
	// GameObject obj2 = obj1;
	// obj2.data[0] = 222;
	// 
	// cout << "obj1.data[0] = " << obj1.data[0] << endl;
	// cout << "obj2.data[0] = " << obj2.data[0] << endl;

#pragma endregion

	GameObject::deathCount;

	GameObject mostet1(1);
	GameObject mostet2(1);
	GameObject mostet3(1);

	return 0;
}