/*
	Topic: Exceptions in Constructors and Destructors
	================================================
*/

#include <iostream>
using namespace std;

class Item
{
	public:
		Item()
		{
			cout << "Constructing An Object: " << endl;
		}

		~Item()
		{
			cout << "Destructing An Object: " << endl;
		}
};


class Sample
{
	public:
		Sample()
		{
			cout << "Sample Constructing An Object: " << endl;
			throw 1;
		}//Fully Constructed

		~Sample()
		{
			cout << "Sample Destructing An Object: " << endl;
		}
};


int main()
{
	try
	{
		Item I;
		Sample S; //Partially Constructed Object
	}
	catch(int i)
	{
		cout << "Caught: " << i << endl;
	}
}
