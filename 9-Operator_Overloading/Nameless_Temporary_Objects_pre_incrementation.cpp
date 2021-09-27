/*
	Topic: Nameless Temporary Objects
*/

#include <iostream>
using namespace std;

class Item
{
	private:
		int x;
	public:
		Item()
		{
			x = 0;
		}
		Item(int y)
		{
			x = y;
		}
		Item operator++()
		{
			return Item(++x);
		}
		void put_data()
		{
			cout << "Printing Updated Value: " << x << endl;
		}
};


int main()
{
	Item A, B;
	A.put_data();
	B = ++A;
	B.put_data();
	A.put_data();
}
