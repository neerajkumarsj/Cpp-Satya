/*
	Topic: Pointers to Derived Objects
	==================================
*/

#include <iostream>
using namespace std;

class Base
{
	public:
		int b;
		void display(void)
		{
			cout << "The Base Value is: " << b << endl;
		}
};

class Derived: public Base
{
	public:
		int d;
		void display(void)
		{
			cout << "The Derived Value is: " << d << endl;
		}
};

int main()
{
	Base *bptr;
	Base B;

	bptr = &B;

	bptr->b = 10;

	bptr->display();

	Derived D;
/*
	1. Using Base Class pointers, we cannot access Derived Class memebers directly.
	bptr = &D;
	bptr->d = 20; 
*/
	bptr = &D;
	bptr->b = 20;
	bptr->display();

	Derived *dptr;
	dptr = &D;

	dptr->b = 30;
	dptr->display();
	((Base *)dptr)->display();
	((Derived *)bptr)->d = 40;
	((Derived *)bptr)->display();
}
