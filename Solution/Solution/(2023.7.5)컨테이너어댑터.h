#pragma once
#include <iostream>

#include <queue>
#include <stack>
#include <vector>


using namespace std;

int main()
{
#pragma region 컨테이너 어댑터
	//기존 컨테이너의 인터페이스를 제한하여 만든, 기능 제한되거나 변형된 컨테이너
	// std::queue<int> queue;
	// 
	// queue.push(10);
	// queue.push(20);
	// queue.push(30);
	// queue.push(40);
	// queue.push(50);
	// 
	// 
	// while (queue.empty() == 0)
	// {
	// 	cout << queue.front() << " ";
	// 	queue.pop();
	// }

	//queue.pop(); 컨테이너에 데이터가 없을 때 pop()을 시도하면 런타임 에러 발생


	//std::swap
	// int a = 10;
	// int b = 20;
	// 
	// std::swap(a, b);
	// 
	// cout << "a: " << a << endl;
	// cout << "b: " << b << endl;

	//std::stack
	// std::stack<int> stack;
	// stack.push(10);
	// stack.push(20);
	// stack.push(30);
	// stack.push(40);
	// stack.push(50);
	// 
	// while (stack.size() != 0)
	// {
	// 	cout << stack.top() << endl;
	// 	stack.pop();
	// }

	// std::iterator 반복자
	// std::vector<int> vector;
	// 
	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// 
	// std::vector<int>::iterator iter;
	// vector.insert(vector.begin() + 1, 999);
	// vector.erase(vector.begin() + 3);
	// 
	// // iter가 가리키는 값
	// for (iter = vector.begin(); iter != vector.end(); iter++)
	// {
	// 	cout << *iter << endl;
	// }

#pragma endregion


	return 0;
}

