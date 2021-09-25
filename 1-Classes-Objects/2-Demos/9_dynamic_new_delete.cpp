#include <iostream>

using namespace std;

class Array
{
	private:
		//int array[size];
		int *array;
		int size;

	public:
		void getdata(void);
		void putdata(void);
};

void Array::getdata(void)
{

	cout << "Enter the size of an array: ";
	cin >> size;
	
	array = new int[size];

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

	delete []array;
	array = NULL; //Array pointer is not dangling.

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

*/





























