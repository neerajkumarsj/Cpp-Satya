/*
	Stacks STL
	==========
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	//To Create a Stack
	stack <int> S; //Default len: 0

	cout << "Size: " << S.size() << endl;
	
	//To push(insert at last) an element
	S.push(10);
	S.push(20);
	S.push(30);
	cout << "Size: " << S.size() << endl;
	cout << "Top Element: " << S.top() << endl; 

	//To pop(delete at last) an element 
#if 0
	S.pop();
	cout << "Size: " << S.size() << endl;
	cout << "Top Element: " << S.top() << endl; 
#endif

	while (!S.empty())
	{
		cout << S.top() << endl;
		S.pop();
	}
	
	//emplace
	stack <string> T;
	T.emplace("Neeraj");
	T.emplace("Pramod");

	while (!T.empty())
	{
		cout << T.top() << endl;
		T.pop();
	}

	stack <int> X;
	X.push(100);
	//X.push(200);
	//X.push(300);

	S.swap(X);
	while (!S.empty())
	{
		cout << S.top() << endl;
		S.pop();
	}
}
