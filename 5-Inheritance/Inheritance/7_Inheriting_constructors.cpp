/*
	Topic: Constructors in Inhritance
	=================================
*/

#include <iostream>
using namespace std;

class Base1
{
	private:
		int x;
	public:
		Base1(int a)
		{
			x = a;
			cout << "Base 1 Class Cnstructor is Invoked: " << endl;
		}
		void display_x(void)
		{
			cout << "X: " << x << endl;
		}
};

class Base2
{
	private:
		int y;
	public:
		Base2(int a)
		{
			y = a;
			cout << "Base 2 Class Cnstructor is Invoked: " << endl;
		}
		void display_y(void)
		{
			cout << "Y: " << y << endl;
		}
};

class Derived: public Base2, public Base1
{
	private:
		int a, b;
	public:
		Derived(int x, int y, int m, int n):Base1(x),Base2(y)
		{
			a = m;
			b = n;
			cout << "Derived Class Constructor is Invoked: " << endl;
		}
		void display_ab(void)
		{
			cout << "A: " << a << " B: " << b << endl;
		}
};

int main()
{
	Derived D(10, 20, 30, 40);
	D.display_x();
	D.display_y();
	D.display_ab();
}
