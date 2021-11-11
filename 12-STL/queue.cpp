/*
	STL: Queues
	===========
	1. Member Functions:
		1. Add: push()
		2. Delete: pop()
		3. Retrive: front()
		4. Empty or Not: empty()
		5. Size: size()
		6. Swap: swap()
		7. Last Element Retrieval: back()
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	//To Create a Stack
	queue <int> S; //Default len: 0

	cout << "Size: " << S.size() << endl;
	
	//To push(insert at last) an element
	S.push(10);
	S.push(20);
	S.push(30);
	cout << "Size: " << S.size() << endl;
	cout << "Top Element: " << S.front() << endl;; 

	//To pop(delete at last) an element 
#if 0
	S.pop();
	cout << "Size: " << S.size() << endl;
	cout << "Top Element: " << S.top() << endl; 
#endif

	while (!S.empty())
	{
		cout << S.front() << '\t';
		S.pop();
	}
	cout << endl;
	
	//emplace
	queue <string> T;
	T.emplace("Neeraj");
	T.emplace("Pramod");

	while (!T.empty())
	{
		cout << T.front() << '\t';
		T.pop();
	}
	cout << endl;

	queue <int> X;
	X.push(100);
	//X.push(200);
	//X.push(300);

	S.swap(X);
	while (!S.empty())
	{
		cout << S.front() << '\t';
		S.pop();
	}
	cout << endl;
}
