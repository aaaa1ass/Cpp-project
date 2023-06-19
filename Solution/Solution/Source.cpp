#include <iostream>
#include "IPhone.h"

using namespace std;

#pragma region 상속
//상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능
class Parent
{
public:
	Parent()
	{
		cout << "Parent() 클래스 생성" << endl;
	}

	~Parent()
	{
		cout << "Parent() 클래스 소멸" << endl;
	}

	void Speak(int a)
	{
		// this 포인터
		// 자기 자신을 가리키는 포인터
		this->a = a;

		cout << this << endl;
		//this 포인터는 호출된 객체를 가리키는 상수 포인터다
		// 상수 포인터 자료형이므로 포인터 자체가 다른 것을 가리키도록 할 수 없다

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
		//public 상속
		//a = 10; (o)
		//b = 20; (o)
		//c = 30; (x)

		//protected 상속
		//a = 10; (o)
		//b = 20; (o)
		//c = 30; (x)

		cout << "Child() 클래스 생성" << endl;
	}
	~Child()
	{
		cout << "Child() 클래스 소멸" << endl;
	}
};
#pragma endregion



int main()
{
	//Child child;
	//public 상속 시
	//child.a = 999;
	
	//protected 상속 시 접근할 수 있는 멤버 변수는 없다
	//private도 없다

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