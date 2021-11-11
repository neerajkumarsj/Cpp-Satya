/*
	Handler throwing the same exception again
	=========================================
*/

#include <iostream>
using namespace std;

const int SIZE = 10;

class Array
{
	private:
		int arr[SIZE];
	public:
		Array();
		class RANGE{};
		int &operator[] (int i)
		{
			if (i < 0 || i >= SIZE)
			{
				throw RANGE();
			}

			return arr[i];
		}
};

Array::Array()
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 10 * i;
	}
}

int read(Array &A, int index)
{
	try
	{
		int item = A[index];
		return item;
	}
	catch(Array::RANGE) //Parent
	{
		cout << "Parent Parsing Exception To child To handle: ";
		throw;
	}
}

int main()
{
	Array A;
	int index, item;
	cout << "Maximum Size of an Array Allowed: " << SIZE << endl;
	
	while (1)
	{
		cout << "Enter the index of the element To retrieve" << endl;
		cin >> index;
		try
		{
			cout << "Trying To access Object Array 'a' for index: " ;
			item = read(A, index);
			
			cout << item << "is the Element" << endl;
			cout << "Succeeded " << endl;
		}
		catch(Array::RANGE) //Child
		{
			cout << "Out Of Range" << endl;
			return -1;
		}
	}
}
