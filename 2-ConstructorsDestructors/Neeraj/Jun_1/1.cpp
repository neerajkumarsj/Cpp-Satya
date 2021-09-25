/*
	Constructor Defin: When the object of the class is creatted, the initial value of private members will also be constructed.
	Topic: Types of Constructors
	1. Default Constructor
	2. Parameterised Constructor
	3. Copy Constructor
*/

#include <iostream>
using namespace std;


//Default
class Item
{
	private:
		int a, b;
	public:
		Item(void);
		void putdata(void);
};

Item::Item(void)
{
	a = 0;
	b = 0;
}

void Item::putdata(void)
{
	cout << "Values are " << a << "\t" << b << endl;
}

int main()
{
	Item I;
	I.putdata();
}
