//Array Multiply

#include <iostream>
using namespace std;

class Array
{
	private:
		int row;
		int col;
		int **darr;
	public:
		Array(){}
		Array(int x, int y)
		{
			row = x;
			col = y;
			darr = new int *[row];
			cout << "Enter the array elements "<< endl;
			for (int i = 0; i < row; i++)
			{
				darr[i] = new int [col];
				for (int j = 0; j < col; j++)
				{
					cin >> darr[i][j];
				}
			}
		}
		friend Array multiply(Array A, Array B);
		void show_data(void);
};

Array multiply(Array A, Array B)
{
	if (A.col != B.row) 
	{
		cout << endl << "Error: Not a good fit for Multiplication as 1st matrix collumn is not equal to 2nd matrix row" << endl;
		exit(-1);
	}

	Array temp;
	temp.row = A.col;
	temp.col = B.row;
	temp.darr = new int *[temp.row];
	for (int i = 0; i < temp.row; i++)
	{
		temp.darr[i] = new int [temp.col];
		for (int j = 0; j < temp.col; j++)
		{
			for (int k = 0; k < temp.row; k++)
			{
				temp.darr[i][j] += A.darr[i][k] * B.darr[k][j];
			}
		}
	}
	return temp;
}

void Array::show_data(void)
{
	cout << "The Updated Matrix is: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]" << " = " << darr[i][j] << "\t";
		}
		cout << endl;
	}
}	

int main()
{
	cout << "The row and col for Matrix A: ";
	Array A(3, 3);
	cout << "The row and col for Matrix A: ";
	Array B(3, 4);
	cout << endl << "Its Matrix A" << endl;
	A.show_data();
	cout << endl << "Its Matrix B" << endl;
	B.show_data();
	cout << endl << "Its Matrix C" << endl;
	Array C = multiply(A, B);
	C.show_data();
}
