#include <iostream>
#include "../Solution/Class Header/Computer.h"

using namespace std;

int value = 0;

int main()
{

#pragma region 다중 상속
	//하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것
	//C#은 지원하지 않을 뿐더러 좋은 것도 아니다

	// Computer computer;

	// 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이 존재할 수 있기 때문에 범위 지정 연산자를 통해서 상위 클래스의 이름을 선언하고 속성을 사용해야 한다

	// computer.Keyboard::price = 10000;
	// computer.Input('c');
	// computer.OnDrag();
#pragma endregion


	return 0;
}

