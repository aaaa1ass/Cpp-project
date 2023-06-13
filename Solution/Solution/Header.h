#pragma once
#include <iostream> // i : input, o : output

// C	출력 printf(), 입력: scanf()
// C++	출력 std::cout, 입력: std::cin

// stream: 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름



void Function(const int& x)
{
	std::cout << "x: " << x << std::endl;
}

int main()
{
#pragma region 입출력



	// char a = 'A';
	// int b = 100;
	// float c = 9.81f;
	// 
	// // << : 삽입 연산자
	// // 자신이 참조한 값을 반환하는 연산자
	// std::cout << a << std::endl; //std::endl : 개행
	// std::cout << b << " / " << c << std::endl;
	// 
	// int data = 0;
	// int data_1 = 0;
	// 
	// // >> : 추출 연산자
	// // 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 전달하는 연산자
	// std::cin >> data >> data_1;
	// std::cout << "data: " << data << std::endl;
	// std::cout << "data_1: " << data_1 << std::endl;

#pragma endregion


#pragma region 동적 할당 ++
	// c
	// malloc()
	// free()

	// c++
	// new 메모리 할당
	// delete 메모리 해제

	// [4 byte 메모리의 시작 주소] --> [][][][]

	//new 객체() 생성자를 호출한다
	//malloc() 생성자를 호출하지 않는다
	//int* ptr = new int;
	//*ptr = 100;
	//delete ptr;
	//
	//int* p = new int[3]; // 4 byte x 3 연속된 메모리
	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;
	//delete [] p;
#pragma endregion


#pragma region 참조자
	// // 어떤 변수의 메모리 공간에의 또 다른 이름
	// 
	// int value = 10;
	// 
	// //참조자 선언
	// int& other = value;
	// int& other1 = value;
	// 
	// std::cout << "value: " << value << std::endl;
	// std::cout << "other: " << other << std::endl;
	// 
	// other = 300;
	// other1 = 23;
	// 
	// Function(value);
	// 
	// std::cout << "value: " << value << std::endl;
	// std::cout << "other: " << other << std::endl;
#pragma endregion

	return 0;
}