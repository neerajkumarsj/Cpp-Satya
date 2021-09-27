/*
	Topic: Overloaded_functon_Templates
	===================================
*/

#include <iostream>
using namespace std;

template <class T>
void print(T x)
{	
	cout << "The value of x is " << x << endl;
}

//template <class T, class U>
//void print(T x, U y)
template <class T>
void print(T x, T y)
{
	cout << "The Sum is : " << x + y << endl;
}

int main()
{
	print(10);
	print(10, 20);
}
