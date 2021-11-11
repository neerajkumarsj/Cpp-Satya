/*
	Topic: Nested Class
	===================
	
*/

#include <iostream>
using namespace std;

class A
{
	private:
		int x;
	public:
		A(int a)
		{
			x = a;
		}
		void display_A(void)
		{
			cout << "A value is : " << x << endl;
		}
};

class B
{
	private:
		int y;
	public:
		B(int a)
		{
			y = a;
		}
		void display_B(void)
		{	
			cout << "B value is: " << y << endl;

		}
};

class C
{
	private:
		int z;
		A obj_A;
		B obj_B;
	public:
		C(int a, int b, int c):obj_A(a), obj_B(b)
		{
			z = c;
		}
		void display_C(void)
		{
			obj_A.display_A();
			obj_B.display_B();
			cout << "C value is : " << z << endl;
		}
};


int main()
{
	C obj_C(10, 20, 30);
	obj_C.display_C();
}


