#pragma once
#include <iostream>

#include <list>
#include <map>
#include <set>

using namespace std;

int main()
{
#pragma region ���� �����̳�
	//key�� valueó�� �����ִ� �����͸� �ϳ��� ������ �����ϴ� �����̳�

	//std::list
	//std::list<int> list;
	//
	//list.push_front(100);
	//list.push_back(90);
	//list.push_back(32);
	//list.push_back(12);
	//list.push_back(2);
	//
	//std::list<int>::iterator iter;
	//
	//for (iter = list.begin(); iter != list.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}
	//
	//list.pop_front();
	//list.pop_back();
	//
	//iter = list.begin();
	//iter++;
	//list.insert(iter, 99);
	//list.erase(iter);
	//
	//cout << endl;
	//
	//for (iter = list.begin(); iter != list.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	//std::map
	// std::map<const char*, int> map;
	// 
	// map.insert(pair<const char*, int>("Sword", 1000));
	// map.insert(pair<const char*, int>("Shoes", 500));
	// 
	// std::map<const char*, int>::iterator mapIterator;
	// 
	// for (mapIterator = map.begin(); mapIterator != map.end(); mapIterator++)
	// {
	// 	// mapIterator->first (key)
	// 	// mapIterator->second (VALUE)
	// 	std::cout << "KEY: " << mapIterator->first << " VALUE: " << mapIterator->second << std::endl;
	// }
	// 
	// //map.find() KEY�� �˻��ϴ� �Լ�
	// if (map.find("Swordf") != map.end())
	// 	cout << "KEY�� �����մϴ�. " << std::endl;
	// else
	// 	cout << "KEY�� �������� �ʽ��ϴ�. " << endl;

	//std::set
	//std::set<int> set;
	//
	//set.insert(10);
	//set.insert(2);
	//set.insert(-23);
	//
	//set.clear(); // ��� ���� ����
	//
	//for (auto& element : set)
	//{
	//	cout << element << endl;
	//}

#pragma endregion


	return 0;
}

