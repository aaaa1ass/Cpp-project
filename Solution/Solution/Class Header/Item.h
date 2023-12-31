#pragma once
#include <iostream>
#include <memory>
static int itemCode;

class Item
{
public:
	std::weak_ptr<Item> ptr;
	int price;

	// 어떤 자료형으로 클래스 멤버 함수를 구체화해야 하는지 모르기 때문에 메모리에 정의되지 않았다
	template <typename T>
	void Search(T data);
	//헤더 파일은 컴파일하지 않는다
	//cpp 파일 내에서 include한 헤더 파일 내용이 복사될 뿐

	//각각 cpp 파일들이 독립적으로 컴파일된 이후에 컴파일이 완료된 같은 프로젝트 내의 cpp파일끼리 링킹된다


	//정적 함수
	static void Upgrade()
	{
		itemCode = 10155;
		std::cout << "item upgrade" << std::endl;
	}

	Item();
	~Item();
};



template<typename T>
inline void Item::Search(T data)
{
	std::cout << data << std::endl;
}