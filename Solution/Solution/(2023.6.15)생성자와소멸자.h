#pragma once
//#include <iostream>
#include "Class Header/Weapon.h"
using namespace std;

#pragma region 생성자
// 클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 멤버 함수

class Person
{
	// 생성자의 경우 객체가 생성될 때 단 한번만 호출되며 생성자는 반환형이 존재하지 않는다
	// 생성자가 호출되기 전에는 객체에 대한 메모리는 할당되지 않는다
	int age;

public:
	//default : 기본 생성자로 명시적으로 지정하는 키워드
	Person() = default;

	Person(int x)
	{
		age = x;
		cout << "생성자 호출" << endl;
	}

	//복사 생성자
	//같은 객체를 복사하여 생성시킬 때 호출되는 생성자
	Person(Person& clone)
	{
		cout << "복사 생성자 호출" << endl;
	}

	//소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수
	~Person()
	{
		//소멸자는 객체가 메모리에서 해제될 때 단 한번만 호출되며, 소멸자는 매개변수를 생성하여 사용할 수 없다
		cout << "Person 삭제" << endl;
	}
};

#pragma endregion

#pragma region 기본 매개 변수
// 매개 변수에 기본 값을 선언하여 함수가 호출될 때 인수없이 호출될 수 있도록 설정하는 매개변수
void Damage(int x = 100)
{
	cout << "x의 값: " << x << std::endl;
}

// 기본 매개 변수를 선언할 때 오른쪽부터 정의한다
void Calculator(int x, int y = 39, int z = 20)
{
	cout << "x의 값: " << x << std::endl;
	cout << "y의 값: " << y << std::endl;
}
#pragma endregion



int main()
{
#pragma region 생성자 & 소멸자
	Animal animal1;
	Animal animal2 = animal1;
	Animal* aptr = new Animal(4);
	delete aptr;

	Weapon weapon;
	weapon.Stat();

	int a(10); // int a = 10;
#pragma endregion



#pragma region 기본 매개 변수
	//Damage();
	//Calculator(1);
#pragma endregion



	return 0;
}