#include <iostream>

#include <list>
#include <map>
#include <set>

using namespace std;

int main()
{
#pragma region 연관 컨테이너
	//key와 value처럼 관련있는 데이터를 하나의 쌍으로 저장하는 컨테이너

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
	// //map.find() KEY를 검색하는 함수
	// if (map.find("Swordf") != map.end())
	// 	cout << "KEY가 존재합니다. " << std::endl;
	// else
	// 	cout << "KEY가 존재하지 않습니다. " << endl;

	//std::set
	//std::set<int> set;
	//
	//set.insert(10);
	//set.insert(2);
	//set.insert(-23);
	//
	//set.clear(); // 모든 원소 삭제
	//
	//for (auto& element : set)
	//{
	//	cout << element << endl;
	//}

#pragma endregion


	return 0;
}

