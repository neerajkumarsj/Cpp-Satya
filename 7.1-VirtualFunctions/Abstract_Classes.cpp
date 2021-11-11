/*
	Topic: Abstract Classes
	======================
	Notes: 1. Abstract Class = Framework = Combination of Class Libraries
		   2. Appliication: 1. To develop graphical editors
							2. In mechanical CAD
							3. To develop debugging info
		   3. In the header files Only classes virtual functions will be present.
*/

#include "Debug.h"
class A: public Debug
{
	int x;
	public:
		A(int p)
		{
			x = p;
		}
		void dump()
		{
			cout << "The Value of x: " << x << endl;
		}
};

class B: public Debug
{
	int y;
	public:
		B(int p)
		{
			y = p;
		}
		void dump()
		{
			cout << "The Value of y: " << y << endl;
		}
};

class C: public Debug
{
	int z;
	public:
		C(int p)
		{
			z = p;
		}
		/*
		void dump()
		{
			cout << "The Value of z: " << z << endl;
		}
		*/
};

int main()
{
	A a(10);
	B b(20);
	C c(30);

	Debug *dp[3] = {&a, &b, &c};
	for (int i = 0;  i < 3; i++)
	{
		dp[i]->dump();
	}
}
