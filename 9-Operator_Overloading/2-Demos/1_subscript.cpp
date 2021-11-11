#include <iostream>

using namespace std;

class Array
{
	int a[5];
	public:
		Array(int *s)
		{
			int i;
			for (i = 0; i < 5; i++)
			{
				a[i] = s[i];
			}
		}

		int operator[](int k)
		{
			return a[k];
		}
};

int main()
{
	int x[5] = {10, 20, 30, 40, 50};
	Array A(x);

	int i;
	for (i = 0; i < 5; i++)
	{
		cout << A[i] << endl;
	}
}
