/*
	Topic: Implementation of private , protected Inheritance of data
	===============================================================
*/


#include <iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A(int x)
		{
			a = x;
		}
		int get_a(void)
		{
			return a;
		}
		void display_a(void)
		{
			cout << "Value of Base1 is: " << a << endl;
		}
};


class B
{
	protected:
		int b;
	public:
		B(int y)
		{
			b = y;
		}
		void display_b(void)
		{
			cout << "Value of Base2 is: " << b << endl;
		}
};


class C: private A, protected B
{
	private:
		int m, n, c;
	public:
		C(int x, int y, int z):A(x), B(y)
		{
			m = get_a();
			n = b;
			c = z;
		}
		int get_c(void)
		{
			return c;
		}
		void display_abc(void)
		{
			cout << "Value of Base2 is: " << c << "\t" << n << "\t" << m << "\t" << endl;
		}
};

int main()
{
    C c(10, 20, 30);
    c.display_abc();
}
