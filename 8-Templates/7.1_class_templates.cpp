/*
	Topic: Template Arguments
	=========================
*/

#include <iostream>
using namespace std;

template <class T, int size>
class Stack
{
	T array[size];
	unsigned int top;
	public:
		Stack();
		void push(const T &item);
		T pop(void);
		//unsigned int get_size(void) const;
};

int main()
{
	Stack <int, 10> A; 
	Stack <char> D; 
}
