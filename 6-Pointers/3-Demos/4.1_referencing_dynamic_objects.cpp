/*
Topic: Referencing dynamic objects
*/

#include <iostream>
using namespace std;

class Item
{
	private:
		int a;
		int b;
	public:
		Item(int x, int y)
		{
			a = x;
			b = y;
		}
/*	
		void getdata(int x, int y)
		{
			a = x;
			b = y;
		}
*/		
		void putdata(void)
		{
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}
};

int main()
{
	Item & A = *(new Item(100, 200));
	//A.getdata(10, 20);
	//Item * ptr = new Item;
	//ptr->putdata();
	A.putdata();
}

