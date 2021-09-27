/*

	Topic: Operator Overloading using Friend Function
	================================================

*/

#include <iostream>
using namespace std;

class Minus
{
	private:
		int a, b;
	public:
		Minus(){} //Default Constuctor form 2
		Minus(int x, int y)
		{
			a = x;
			b = y;
		}
#if 0
		void operator-()
		{
			a = -a;
			b = -b;
		}
#endif
		void display()
		{
			cout << "The Values are: " << a << b << endl;
		}
		friend void operator-(Minus);
};

//Friend Operator Overloading

void operator-(Minus M)
{
	M.a = -M.a;
	M.b = -M.b;
}

int main()
{
	Minus M(10, 20);
	Minus N;
	-M;
	M.display();
	//N = -M;
}
