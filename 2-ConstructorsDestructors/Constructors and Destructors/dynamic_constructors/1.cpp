/*

*/
#include <iostream>
using namespace std;

class Array
{
	private:
		int size;
		int *arr;
	public:
		Array(int n)
		{
			size = n;
			arr = new int [size];
			for (int i = 0; i < size ; i++)
			{
				arr[i] = 100;
			}
		}

		void put_data(void)
		{
			cout << "Array Item: ";
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << "\t";
			}
		}
};

int main()
{
	int n;
	cout << "Enter the n value: ";
	cin >> n;
	Array A(n);
	A.put_data();

}
