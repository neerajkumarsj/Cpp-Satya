/*
	Topic: Implementation of private to private Inheritance of data
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
	private:
		int b;
	public:
		B(int y)
		{
			b = y;
		}
		int get_b(void)
		{
			return b;
		}
		void display_b(void)
		{
			cout << "Value of Base2 is: " << b << endl;
		}
};


class C: private A, private B
{
	private:
		int m, n;
		int c;
	public:
		C(int x, int y, int z): A(x), B(y)
		{
			m = get_a();
			n = get_b();
			c = z;
		}
		int get_c(void)
		{
			return c;
		}
		void display_c(void)
		{
			cout << "Value of Base2 is: " << c << "\t" << n << "\t" << m << "\t" << endl;
		}
};

int main()
{
    C c(10, 20, 30);
    c.display_c();
}
