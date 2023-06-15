//#include <iostream>
#include "Weapon.h"
using namespace std;

#pragma region ������
	// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�

class Animal
{
	// �������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ� �����ڴ� ��ȯ���� �������� �ʴ´�
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ���� �ʴ´�
	int age;

public :
	//default : �⺻ �����ڷ� ��������� �����ϴ� Ű����
	Animal() = default;

	Animal(int x)
	{
		age = x;
		cout << "������ ȣ��" << endl;
	}

	//���� ������
	//���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������
	Animal(Animal& clone)
	{
		cout << "���� ������ ȣ��" << endl;
	}

	//�Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ�
	~Animal()
	{
		//�Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڴ� �Ű������� �����Ͽ� ����� �� ����
		cout << "Animal ����" << endl;
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