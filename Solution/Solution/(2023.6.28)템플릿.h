#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "Class Header/Item.h"

using namespace std;

#pragma region ���ø�
//�Լ��� Ŭ������ �ٽ� �ۼ����� �ʾƵ� ������ �ڷ������� ������ �� �ֵ��� ���ִ� ���
template<typename T>
void DateType(T value)
{
	cout << value << endl;
}
#pragma endregion

#pragma region ���ø��� Ư��ȭ
// ���ø� �Լ��� ���������, Ư�� �Ű������� ���ؼ��� ���� ó���� �ϴ� ���
template<typename T>
int DataSize(T data)
{
	return sizeof(data);
}

template<>
int DataSize(const char* content)
{
	return strlen(content) + 1;
}
#pragma endregion

#pragma region Ŭ���� ���ø�
template<typename T1, typename T2>
class Dictionary
{
private:
	T1 key;
	T2 value;

public:
	Dictionary(T1 key, T2 value)
	{
		this->key = key;
		this->value = value;
	};

	void ContainsKey()
	{
		cout << key << endl;
	}
	void ContainsValue()
	{
		cout << value << endl;
	}

};
#pragma endregion

int main()
{
#pragma region ���ø�
	//DateType('A');
	//DateType(10);
	//DateType(3.141592f);
	//DateType(4.75);
#pragma endregion

#pragma region ���ø� Ư��ȭ
	// int integer = 10;
	// double decimal = 6.75;
	// const char* content = "I am sad";
	// 
	// std::cout << "integer ������ ũ�� : " << DataSize(integer) << endl;
	// std::cout << "decimal ������ ũ�� : " << DataSize(decimal) << endl;
	// std::cout << "content ������ ũ�� : " << DataSize(content) << endl;
#pragma endregion

#pragma region Ŭ���� ���ø�
	//Dictionary<char, int> dictionary1 ('A',100);
	//dictionary1.ContainsKey();
	//dictionary1.ContainsValue();
	//
	//Dictionary<const char *, double> dictionary2 ("Mario", 1.6);
	//dictionary2.ContainsKey();
	//dictionary2.ContainsValue();
#pragma endregion

	//Item item;
	//
	//item.Search(100);

	Item::Upgrade();

	return 0;
}

