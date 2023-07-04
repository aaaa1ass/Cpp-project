#include <iostream>

//STL 라이브러리
#include<string>

using namespace std;




int main()
{
#pragma region 문자열 클래스 std::string
	std::string string("문자열");
	std::string name;

	//std::cout << "string 변수의 값: " << string << endl;
	//
	//string = "클래스";
	//
	//std::cout << "string 변수의 값: " << string << endl;

	std::cout << "string 변수의 값을 입력: ";
	std::cin >> string;

	std::cout << "name 변수의 값을 입력: ";
	std::cin >> name;

	std::cout << "string 변수의 값: " << string << endl << "name 변수의 값: " << name <<std::endl;
	//띄어쓰기 고치기
#pragma endregion

	return 0;
}

