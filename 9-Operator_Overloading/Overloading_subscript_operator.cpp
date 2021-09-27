/*

	Topic: Overloading Subscript Operator
	=====================================

*/

#include <iostream>
using namespace std;

class Array
{
	private:
		int a[5];
	public:
		Array(int *x)
		{
			int i;
			cout << "Array Initialised" << endl;
			for (i = 0; i < 5; i++)
			{
				a[i] = x[i];
			}
		}
		int operator[](int i)
		{
			return a[i];
		}
};


int main()
{
	int x[5] = {10, 20, 30, 40 , 50};
	Array A(x);

	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << endl;
	}
}
