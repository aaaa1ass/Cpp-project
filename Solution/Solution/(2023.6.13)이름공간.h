#pragma once
#include <iostream> 
using namespace std;
int data = 56;

#pragma region 이름 공간
// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역

namespace A
{
	void Damage()
	{
		cout << "A 개발자 Damage() 함수" << endl;
	}
}
namespace B
{
	void Damage()
	{
		cout << "B 개발자 Damage() 함수" << endl;
	}
}
#pragma endregion


// auto는 매개 변수로 사용할 수 없다
void Volume(int x)
{

}

using namespace A;
int main()
{
#pragma region 범위 지정 연산자
	// // 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자
	// // (범위 연산자)::
	// 
	// int data = 100;
	// 
	// // 전역 변수와 지역 변수가 같은 이름으로 선언되었을 때 가장 가까운 범위의 변수를 사용하는 규칙으로 전역 변수가 호출되지 않음
	// std::cout << "Stack 영역의 data: " << data << std::endl;
	// std::cout << "Data 영역의 data: " << ::data << std::endl;
#pragma endregion

#pragma region 이름 공간
	//A::Damage();
	//B::Damage();

#pragma endregion

#pragma region auto (자료형 추론)
	//  // 선언된 변수의 초기화 식을 사용하여 해당 형식을 추론하도록 컴파일러에게 지시하는 기능
	//  
	//  auto decimal = 6.25;
	//  auto value = 100;
	//  
	//  // auto 사용 시 값을 반드시 넣어야 한다.
	//  // auto bin; -> x
	//  
	//  // for(초기값; 조건식; 증감식)
	//  
	//  //범위 기반 for문(foreach)
	//  int table[5] = { 1,2,3,4,5 };
	//  
	//  for (const int & e : table)
	//  {
	//  	std::cout << e << std::endl;
	//  }



#pragma endregion






	return 0;
}