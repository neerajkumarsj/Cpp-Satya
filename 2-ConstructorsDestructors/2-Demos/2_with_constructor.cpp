/*
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
		Item(int x, int y) //Constructor
		{
			a = x;
			b = y;
		}

		void put_data(void)
		{
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}		
};

int main()
{
	//Item I;
	//I.get_data(10, 20); // Extra work
	//Item I = Item(10, 20);  //Explicit
	Item I(10, 20);  //Implicit

	//Inbuilt
	//int a = 10;
	I.put_data();
}
