/*
	Topic: Single Inheritance in Public Mode:
	=========================================
	Program:
	
*/
#include <iostream>
using namespace std;


class Base
{
	private:
		int a;
	public:
		int b;
		void set_ab();
		int get_a();
		void display_a();
};

void Base::set_ab()
{
	a = 10;
	b = 20;
}

int Base::get_a()
{
	return a;
}

void Base::display_a()
{
	cout  << "Updated a values is: " << a << endl;
}

class Derived:public Base
{
	private:
		int c;
	public:
		void multiply(void);
		void display(void);
};

void Derived::multiply()
{
	c = get_a() * b; 
}

void Derived::display(void)
{
	cout << "Multiplied Value is: " << c << endl;
}


int main()
{
	Derived D;
	D.set_ab();

	D.multiply();
	D.display();
}
