/*
	Topic: Abstract Class
	=====================
	Version: 2
	____________________
	1. 
*/

#include <iostream>
using namespace std;

// If the Class Contains atleast one virtual function, then that class is called, Abstract Class
class Myclass
{
	private:
		int x;
	public:
		Myclass(int y)
		{
			x = y;
		}
		int getX(void)
		{
			return x;
		}
		virtual void calculate() = 0; //---> Syntax For Abstract Class

};

class Square:public Myclass
{
	public:
		Square(int y):Myclass(y){}
		void calculate(void)
		{
			cout << "Square: " << getX() * getX() << endl;
		}
};

class Cube: public Myclass
{
	public:
		Cube(int y):Myclass(y){}
		void calculate(void)
		{
			cout << "Cube: " << getX() * getX() * getX() << endl;
		}
};

int main()
{
#if 0
	Myclass A(2);
	A.calculate();

	Myclass B(4);
	B.calculate();
#endif

	Square A(2);
	A.calculate();

	Cube B(3);
	B.calculate();
}
