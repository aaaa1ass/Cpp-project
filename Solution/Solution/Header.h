#pragma once
#include <iostream> // i : input, o : output

// C	��� printf(), �Է�: scanf()
// C++	��� std::cout, �Է�: std::cin

// stream: �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧



void Function(const int& x)
{
	std::cout << "x: " << x << std::endl;
}

int main()
{
#pragma region �����



	// char a = 'A';
	// int b = 100;
	// float c = 9.81f;
	// 
	// // << : ���� ������
	// // �ڽ��� ������ ���� ��ȯ�ϴ� ������
	// std::cout << a << std::endl; //std::endl : ����
	// std::cout << b << " / " << c << std::endl;
	// 
	// int data = 0;
	// int data_1 = 0;
	// 
	// // >> : ���� ������
	// // ���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ �����ϴ� ������
	// std::cin >> data >> data_1;
	// std::cout << "data: " << data << std::endl;
	// std::cout << "data_1: " << data_1 << std::endl;

#pragma endregion


#pragma region ���� �Ҵ� ++
	// c
	// malloc()
	// free()

	// c++
	// new �޸� �Ҵ�
	// delete �޸� ����

	// [4 byte �޸��� ���� �ּ�] --> [][][][]

	//new ��ü() �����ڸ� ȣ���Ѵ�
	//malloc() �����ڸ� ȣ������ �ʴ´�
	//int* ptr = new int;
	//*ptr = 100;
	//delete ptr;
	//
	//int* p = new int[3]; // 4 byte x 3 ���ӵ� �޸�
	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;
	//delete [] p;
#pragma endregion


#pragma region ������
	// // � ������ �޸� �������� �� �ٸ� �̸�
	// 
	// int value = 10;
	// 
	// //������ ����
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