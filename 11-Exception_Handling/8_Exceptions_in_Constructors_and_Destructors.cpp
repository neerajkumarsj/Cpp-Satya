/*
	Topic: Exceptions in Constructors and Destructors
	================================================
*/

#include <iostream>
using namespace std;

class Item
{
	int *ptr;
	public:
		Item()
		{
			cout << "Constructing An Object: " << endl;
			ptr = new int[10];
		}

		~Item()
		{
			cout << "Destructing An Object: " << endl;
			delete this;
		}
};


int main()
{
	Item *iptr;
	try
	{
		//Item I;
		iptr = new Item;
		throw 1;
	}
	catch(int i)
	{
		cout << "Caught: " << i << endl;
	}
}
