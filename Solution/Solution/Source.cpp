#include <iostream>
#include "IPhone.h"

using namespace std;

#pragma region ���
//���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ���
class Parent
{
public:
	Parent()
	{
		cout << "Parent() Ŭ���� ����" << endl;
	}

	~Parent()
	{
		cout << "Parent() Ŭ���� �Ҹ�" << endl;
	}

	void Speak(int a)
	{
		// this ������
		// �ڱ� �ڽ��� ����Ű�� ������
		this->a = a;

		cout << this << endl;
		//this �����ʹ� ȣ��� ��ü�� ����Ű�� ��� �����ʹ�
		// ��� ������ �ڷ����̹Ƿ� ������ ��ü�� �ٸ� ���� ����Ű���� �� �� ����

		cout << "Speak()" << endl;
	}
	int a;
protected:
	int b;
private:
	int c;
};

class Child : public Parent
{
public:
	Child()
	{
		//public ���
		//a = 10; (o)
		//b = 20; (o)
		//c = 30; (x)

		//protected ���
		//a = 10; (o)
		//b = 20; (o)
		//c = 30; (x)

		cout << "Child() Ŭ���� ����" << endl;
	}
	~Child()
	{
		cout << "Child() Ŭ���� �Ҹ�" << endl;
	}
};
#pragma endregion



int main()
{
	//Child child;
	//public ��� ��
	//child.a = 999;
	
	//protected ��� �� ������ �� �ִ� ��� ������ ����
	//private�� ����

	// Parent parent1;
	// parent1.Speak();
	// 
	// Parent parent2;
	// parent2.Speak();
	// 
	// Parent parent3;
	// parent3.Speak();

	//child.Speak();

	IPhone iPhone14;

	iPhone14.SetControlSound(5);

	cout << iPhone14.GetVolume() << endl;

	return 0;
}