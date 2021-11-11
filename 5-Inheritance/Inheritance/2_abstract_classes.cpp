/*
	Topic: Abstract Class
	====================


*/

#include <iostream>
using namespace std;


class Myclass
{
	private:
		int x;
	public:
		Myclass(int y)
		{
			x = y;
		}
		void calculate(void)
		{
			cout << "Square: " << x * x << endl;
		}
};

int main()
{
	Myclass A(2);
	A.calculate();

	Myclass B(4);
	B.calculate();
}
