/*
	Topic: Multiple Inheritance
	===========================
	Program: Demo Program
	---------------------------

*/

#include <iostream>
using namespace std;

class B1
{
	protected:
		int a;
	public:
		void get_a(int x)
		{
			a = x;
		}
        void display(void)
        {
            cout << "Value of a is: " << a << endl;
        }
};


class B2
{
	protected:
		int b;
	public:
		void get_b(int x)
		{
			b = x;
		}
        void display(void)
        {
            cout << "Value of b is: " << b << endl;
        }
};


class D:public B1, public B2
{
	public:
		void display(void)
		{
			cout << "Value of a and b is: " << a << "\t" << b << endl;
		}
};


int main()
{
	D d;
	d.get_a(10);
	d.get_b(20);
	d.display();

	d.B1::display();
}
