//Array Compare

#include <iostream>
using namespace std;

class Array
{
	private:
		int row;
		int col;
		int **darr;
	public:
		friend void compare(Array A, Array B);
		void get_data(void);
};

void compare(Array A, Array B)
{
	if (A.row != B.row || A.col != B.col)
	{
		cout << endl << "Error: Row or Column of Both arrays are Not Equal" << endl;
		exit(-1);
	}


	for (int i = 0; i < A.row; i++)
	{
		for (int j = 0; j < A.col; j++)
		{
			if (A.darr[i][j] == B.darr[i][j])
			{
				cout << i << " of " << j << " Elements of Both arrays A and B are equal" << endl;
				continue;
			}
			else
			{
				cout << i << " of " << j << " Elements of Both arrays A and B are not equal" << endl;
				exit(1);
			}
		}
	}
	exit(0);
}

void Array::get_data(void)
{
	cout << "Enter the row and columns of the array: ";
	cin >> row >> col;

	darr = new int *[row];
	cout << "Enter the array elements ";
	for (int i = 0; i < row; i++)
	{
		darr[i] = new int [col];
		for (int j = 0; j < col; j++)
		{
			cin >> darr[i][j];
		}
	}
}

int main()
{
	Array A, B;
	A.get_data();
	B.get_data();
	compare(A, B);
}
