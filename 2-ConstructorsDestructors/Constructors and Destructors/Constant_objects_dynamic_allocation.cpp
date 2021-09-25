/*
Topic: Constant Objects
=================================================================
1. Constructors should be declared in PUBLIC section only.
2. No return type, not even VOID.
3. The name of the constructor is same as name of the class.
4. It is invoked automatically when the objects are created.
*/

#include <iostream>

using namespace std;

class Item
{
	private:
		int a;
		int b;
	public:
		Item()
		{
			a = 0;
			b = 0;
		}
#if 1
		Item(int x, int y = 100) //Parameterised Constructor
		{
			a = x;
			b = y;
		}
		
		Item(Item & I) //Copy Constructor
		{
			a = I.a;
			b = I.b;
		}
#endif
		void put_data(void)
		{
			a = 20;
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}	
};

int main()
{
	cout << "Enter two values: " << endl;
	int x, y;
	cin >> x >> y;
	
	//const Item I(x, y); //Dynamic Intiatilisation
	//I.put_data();
	Item A(10, 20);
	A.put_data();
}
