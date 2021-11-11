/*
	Exceptions in Operator Overloading Functions
	===========================================
*/

#include <iostream>
using namespace std;

const int SIZE_t = 10;

class Vector
{
	private:
		int *arr;
		int size;
	public:
		class RANGE{};
		class SIZE{};

		Vector(int n)
		{
			if (n <= 0 || n > SIZE_t)
			{
				throw SIZE();
			}

			size = n;
			arr = new int[size];
		}

		int &operator[] (int i)
		{
			if (i < 0 || i >= SIZE_t)
			{
				throw RANGE();
			}

			return arr[i];
		}

		~Vector()
		{	
			delete arr;
			arr = NULL;
		}
};

int main()
{
	int size, index;
	try
	{
		cout << "Enter the size of the vector to create: " ;
		cin >> size;

		cout << "Trying to create an object: of type vector of size: " << size << endl;
		Vector V1(size);
		cout << "Object Creation Successful " << endl;
		cout << "Which Vector element, do you want access?";
		cin >> index;
	}
	catch(Vector::RANGE)
	{
		cout << "Out Of Range" << endl;
		return -1;
	}
	catch(Vector::SIZE)
	{
		cout << "Vector Creation Failed Because size Exceeded the Limit" << endl;
		return -1;
	}

}
