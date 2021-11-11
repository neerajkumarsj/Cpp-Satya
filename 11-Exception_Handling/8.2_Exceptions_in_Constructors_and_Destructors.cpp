/*
	Array Reference Out Of Bound
	============================
*/

#include <iostream>
using namespace std;

const int SIZE = 10;

class Array
{
	private:
		int *arr;
		int size;
	public:
		class N{};
		class RANGE{};
		Array(int size_req)
		{
			if ((size_req < 0) || (size_req > 10))
			{
				throw N();	
			}
			size = size_req;
			arr = new int[size_req];
		}

		int &operator[] (int i)
		{
			if (i < 0 || i >= size)
			{
				throw RANGE();
			}

			return arr[i];
		}

		~Array()
		{
			cout << "Invoking Destructor: " << endl;
			delete arr;
		}
};


int main()
{
	cout << "Maximum Size of an Array Allowed: " << SIZE << endl;

	try
	{
#if 0
		cout << "Trying To Create an Object: " << "A(5)" << endl;
		Array A(5);
		cout << "Succeeded " << endl;
		A[5] = 100;
		cout << "Trying to refer an object A[15]" << endl;
		A[15] = 200;
#endif

		cout << "Trying To Create an Object: " << "A(15)" << endl;
		Array A(15);
	}
	catch(Array::RANGE)
	{
		cout << "Out Of Range" << endl;
		return -1;
	}
	catch(Array::N)
	{	
		cout << "Size out of Range" << endl;
		return -2;
	}
}
