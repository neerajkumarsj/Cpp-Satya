//Array Transpose

#include <iostream>
using namespace std;

class Array
{
	private:
		int row;
		int col;
		int **darr;
	public:
		friend Array transpose(Array A);
		void get_data(void);
		void display(void);
};

Array transpose(Array A)
{
	Array temp;
	temp.row = A.col;
	temp.col = A.row;
	temp.darr = new int *[A.col];
	for (int i = 0; i < temp.row; i++)
	{	temp.darr[i] = new int [A.row];
		for (int j = 0; j < temp.col; j++)
		{
			temp.darr[i][j] = A.darr[j][i]; 
		}
	}
	return temp;
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


void Array::display(void)
{
	cout << "Transposed Elements are: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << darr[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	Array A, B;
	A.get_data();
	A.display();
	B = transpose(A);
	B.display();
}
