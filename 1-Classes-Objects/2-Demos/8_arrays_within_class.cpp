#include <iostream>

using namespace std;

const int size = 5;
//const int size; //Init is must

class Array
{
	private:
		int array[size];

	public:
		void getdata(void);
		void putdata(void);
};

void Array::getdata(void)
{
	cout << "Enter 5 items: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

void Array::putdata(void)
{
	cout << "Items are: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}

int main()
{
	Array A;
	A.getdata();
	A.putdata();
}

/*
+ Points:

1. TC is less
	- Statically allocation is always faster.

2. Memory will be automatically deleted, when the object goes out of scope.
*/





























