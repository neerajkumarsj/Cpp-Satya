/*

	Topic: Operator Overloading
	===========================

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

		void operator-()
		{
			a = -a;
			b = -b;
		}

		void display()
		{
			cout << "The Values are: " << a << b << endl;
		}
};


int main()
{
	Minus M(10, 20);
	Minus N;
	-M;
	M.display();
	N = -M;
}
