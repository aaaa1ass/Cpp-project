#pragma once
#include <iostream> 
using namespace std;
int data = 56;

#pragma region �̸� ����
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����

namespace A
{
	void Damage()
	{
		cout << "A ������ Damage() �Լ�" << endl;
	}
}
namespace B
{
	void Damage()
	{
		cout << "B ������ Damage() �Լ�" << endl;
	}
}
#pragma endregion


// auto�� �Ű� ������ ����� �� ����
void Volume(int x)
{

}

using namespace A;
int main()
{
#pragma region ���� ���� ������
	// // ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������
	// // (���� ������)::
	// 
	// int data = 100;
	// 
	// // ���� ������ ���� ������ ���� �̸����� ����Ǿ��� �� ���� ����� ������ ������ ����ϴ� ��Ģ���� ���� ������ ȣ����� ����
	// std::cout << "Stack ������ data: " << data << std::endl;
	// std::cout << "Data ������ data: " << ::data << std::endl;
#pragma endregion

#pragma region �̸� ����
	//A::Damage();
	//B::Damage();

#pragma endregion

#pragma region auto (�ڷ��� �߷�)
	//  // ����� ������ �ʱ�ȭ ���� ����Ͽ� �ش� ������ �߷��ϵ��� �����Ϸ����� �����ϴ� ���
	//  
	//  auto decimal = 6.25;
	//  auto value = 100;
	//  
	//  // auto ��� �� ���� �ݵ�� �־�� �Ѵ�.
	//  // auto bin; -> x
	//  
	//  // for(�ʱⰪ; ���ǽ�; ������)
	//  
	//  //���� ��� for��(foreach)
	//  int table[5] = { 1,2,3,4,5 };
	//  
	//  for (const int & e : table)
	//  {
	//  	std::cout << e << std::endl;
	//  }



#pragma endregion






	return 0;
}