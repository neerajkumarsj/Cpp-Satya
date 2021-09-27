/*
	Topic: Class Templates
	======================
*/

#include <iostream>
using namespace std;

template <class T>
class Stack
{
	T array[10];
	unsigned int top;
	public:
		Stack();
		void push(const T &item);
		T pop(void);
		unsigned int get_size(void) const;
		void peep(void);
};

/*
class T
{};
*/

int main()
{
	Stack <int> A; 
	Stack <char> D; 
}
