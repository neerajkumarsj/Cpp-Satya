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
		int arr[SIZE];
	public:
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


int main()
{
	Array A;
	cout << "Maximum Size of an Array Allowed: " << SIZE << endl;

	try
	{
		A[1] = 100;

		cout << "Succeeded " << endl;
		A[15] = 200;
	}
	catch(Array::RANGE)
	{
		cout << "Out Of Range" << endl;
		return -1;
	}
}
