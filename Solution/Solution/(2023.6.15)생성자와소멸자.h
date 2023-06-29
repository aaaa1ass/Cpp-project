#pragma once
//#include <iostream>
#include "Class Header/Weapon.h"
using namespace std;

#pragma region ������
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�

class Person
{
	// �������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ� �����ڴ� ��ȯ���� �������� �ʴ´�
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ���� �ʴ´�
	int age;

public:
	//default : �⺻ �����ڷ� ��������� �����ϴ� Ű����
	Person() = default;

	Person(int x)
	{
		age = x;
		cout << "������ ȣ��" << endl;
	}

	//���� ������
	//���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������
	Person(Person& clone)
	{
		cout << "���� ������ ȣ��" << endl;
	}

	//�Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ�
	~Person()
	{
		//�Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڴ� �Ű������� �����Ͽ� ����� �� ����
		cout << "Person ����" << endl;
	}
};

#pragma endregion

#pragma region �⺻ �Ű� ����
// �Ű� ������ �⺻ ���� �����Ͽ� �Լ��� ȣ��� �� �μ����� ȣ��� �� �ֵ��� �����ϴ� �Ű�����
void Damage(int x = 100)
{
	cout << "x�� ��: " << x << std::endl;
}

// �⺻ �Ű� ������ ������ �� �����ʺ��� �����Ѵ�
void Calculator(int x, int y = 39, int z = 20)
{
	cout << "x�� ��: " << x << std::endl;
	cout << "y�� ��: " << y << std::endl;
}
#pragma endregion



int main()
{
#pragma region ������ & �Ҹ���
	Animal animal1;
	Animal animal2 = animal1;
	Animal* aptr = new Animal(4);
	delete aptr;

	Weapon weapon;
	weapon.Stat();

	int a(10); // int a = 10;
#pragma endregion



#pragma region �⺻ �Ű� ����
	//Damage();
	//Calculator(1);
#pragma endregion



	return 0;
}