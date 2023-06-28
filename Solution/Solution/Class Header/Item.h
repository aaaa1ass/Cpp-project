#pragma once
#include <iostream>
#include <memory>

class Item
{
public:
	std::weak_ptr<Item> ptr;
	int price;

	// � �ڷ������� Ŭ���� ��� �Լ��� ��üȭ�ؾ� �ϴ��� �𸣱� ������ �޸𸮿� ���ǵ��� �ʾҴ�
	template <typename T>
	void Search(T data);
	//��� ������ ���������� �ʴ´�
	//cpp ���� ������ include�� ��� ���� ������ ����� ��

	//���� cpp ���ϵ��� ���������� �����ϵ� ���Ŀ� �������� �Ϸ�� ���� ������Ʈ ���� cpp���ϳ��� ��ŷ�ȴ�


	//���� �Լ�
	static void Upgrade()
	{
		itemCode = 10155;
		std::cout << "item upgrade" << std::endl;
	}

	Item();
	~Item();
};

static int itemCode;

template<typename T>
inline void Item::Search(T data)
{
	std::cout << data << std::endl;
}