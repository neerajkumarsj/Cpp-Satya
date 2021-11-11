/*
	Topic: How is Dynamic Binding Achieved?
	=======================================
	Notees: 1. Via virtual pointers and virtual table.
	        2. Virtual Table = Array of Function Pointers.
				- Compiler will create the virtual table.(Compilation Time)
				- Disadvantage:
					- Space Complexity will be High
					- Time Comlexity will be High.
*/

#include <iostream>
using namespace std;

class A
{
	int x;
	public:
		void display()
		{}
};

class B
{
	int x, y, z;
	public:
		virtual void display()
		{}
		virtual void show()
		{}
		virtual void add()
		{}
};

int main()
{
	cout << "Size of A: " << sizeof(A) << endl;
	cout << "Size of B: " << sizeof(B) << endl;
}
