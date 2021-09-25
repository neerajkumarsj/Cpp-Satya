#if 0
	Dated: 13-Jun-2021
	------------------
	Topic: Determinant of N X N Matrix
	==================================
	Algorithm:

	Input: 
	Statement: To Calculate Determinant of Matrix of N rows and columns
	Ex:
		1 2 3
		4 5 6
		7 8 9 ---> 3 x 3 determinant
	Inputs  0.	Variables used
				1. int c for main matrix column travarsing.
				2. int i and int j for main matrix row and column traversing for creating submatrix.
				3. int _i and int _j for sub matrix row and column traversing.
				4. int *smatrix sub matrix pointer.
				5. int *matrix main matrix pointer.
				6. int size for the value of N i.e. value of row and col of matrix.
				7. int result for the determinant value
			-------------------------------------------------------------------------------------
			1.	Classes used
				1. Class Determinant
					private: 1. int **matrix
							 2. int **submatrix
							 3. int size
			-------------------------------------------------------------------------------------
			2.	Functions used
				1. Under class-Determinant
					1. Determinant Parameterised Cosutructor.
					   Agruments:
							1. int size
					   Inputs:	
							1. Elements of Matrix
					2. int function for calculating determinant.
					3. void function for creating sub matrix.
				2. Main function of int type
			--------------------------------------------------------------------------------------
			3.	Objects used
				1. Of type Determinant D(N)
			======================================================================================
	Logic for Creating Submatrix(int **matrix, int n)
	-------------------------------------------------
		1. _i = 0
		2. *submatrix[n]
		3. for i -> 1 to n
		4.		_j = 0
		5.		submatrix[n][n]
		6.		for j -> 0 to n
		7.			submatrix[_i][_j] = matrix[i][j]
		8.		_j++
		9.	_i++
		10. returning **submatrix
	Logic for Calculating Determinant(int n)
	---------------------------------------
		1. if (size == 2)
		2.	 return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1]
		3. else
		4.	for c -> 0 to size
		5.	 int result = power(-1, c) * mat[0][c] * _Calculating_Determinant_(size - 1)
=====================================================================================================
#endif
#include <iostream>
#include <math.h>
using namespace std;

class Determinant
{
	private:
		int **matrix;
		int **submatrix;
	public:
		Determinant(int x)
		{
			cout << "Enter The Determinant Elements: " << endl;
			matrix = new int *[x];
			for (int i = 0; i < x; i++)
			{
				matrix[i] = new int [x];
				for (int j = 0; j < x; j++)
				{
					cin >> matrix[i][j];
				}
			}
		}

		void sub_matrix(int **matrix, int n);
		double determinant(int n);
		void display(int);
};

void Determinant::sub_matrix(int **matrix, int n)
{
	int _i = 0, _j; 
    char x;
    submatrix = new int *[n - 1];
    cout << "here is sub i" << _i << endl;
    for (int i = 0; i < n - 1; i++)
    {
		cout << "here is sub i in loop: " << _i << endl;
		_j = 0;
        submatrix[i] = new int [n - 1];
        for (int j = 0; j < n - 1; j++)
        {
            //cout << endl << _i <<"\t"<< _j << "\t" << matrix[i + 1][j + 1] << "\t" << i + 1 << "\t" << j + 1 << endl;
            submatrix[_i][_j] = matrix[i + 1][j + 1];
            _j++;
        }   
        _i++;
    }
}    

double Determinant::determinant(int n)
{
	int det;
	if (n == 2)
	{
		det = matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
	}
	else
	{
		for (int c = 0; c < n; c++)
		{
			sub_matrix(matrix, n);
			det = det + (pow(-1, c) * matrix[0][c] * Determinant::determinant(n - 1));
		}
	}
	return det;
}

void Determinant::display(int n)
{
    cout << "The Determinant is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "]" << " = " << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
	int n;
	cout << "Enter the Size: ";
	cin >> n;
	Determinant D(n);
	D.display(n);
	cout << "Determinant of the given matrix is: " << D.determinant(n) << endl;;
}
