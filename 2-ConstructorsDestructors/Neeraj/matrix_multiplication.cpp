/*
A1: Matrix Multiplication
=========================
class A
{
	int arr[2][3];
}

class B
{
	int arr[3][2];
}

class C
{
	int arr[][]; // Dynamic
	int **arr;
}

1. Verify - Friend function
2. Multiply. - Friend
	C multiply (A, B)
*/

#include <iostream>

using namespace std;

//Class Forwarding
class A;
class B;
class C;

class A
{
	private:
		int m, n;
		int **arr;
	public:
		friend void verify_n_multiply(A a, B b, C c);
		friend C multiply(A a, B b);
		void get_data(void);
		void show_data(void);
};

class B
{
	private:
		int p, q;
		int **arr;
	public:
		friend void verify_n_multiply(A a, B b, C c);
		friend C multiply(A a, B b);
		void get_data(void);
};


class C
{
	private:
		int r, flag = 1;
		int **arr;
	public:
		friend void verify_n_muiltiply(A a, B b, C c);
		friend C multiply(A a, B b);
		void show_data(void);
};


void verify_n_multiply(A a, B b, C c)
{
	if (a.n == b.p )
	{
		//cout << a.n << "\t" << b.p << endl;
		//c.flag = 0;
		c = multiply(a, b);
		c.show_data();
	}
	else if(a.m == b.q)
	{
		//c.flag = 1;
		c = multiply(a, b);
		c.show_data();	
	}
	else
	{
		cout << "Sorry it Cannot be Multiplied" << endl;
	}
}

C multiply(A a, B b)
{
	C temp;

	if (temp.flag == 1)
	{
		temp.r = a.m;
	}
	else
	{
		temp.r = a.n;
	}

	temp.arr = new int *[temp.r];
	for (int i = 0; i < temp.r ; i++)
	{
		temp.arr[i] = new int [temp.r];
		for (int j = 0; j < temp.r ; j++)
		{
			for (int k = 0; k < temp.r ; k++)
			{
				//temp.arr[i][j] += a.arr[i][k] * b.arr[k][j];
				cout << i << j << k << "\t" << a.arr[i][k] << "\t" << b.arr[k][j] << endl;
			}
		}
	}
	return temp;
}

void A::get_data(void)
{
	cout << "Enter the Row and Collumns for A: ";
	cin >> m >> n;
	cout << "Enter the A's array elements: ";
	arr = new int *[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int [n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void B::get_data(void)
{
	cout << "Enter the Row and Collumns for B: ";
	cin >> p >> q;
	cout << "Enter the B's array elements: ";
	arr = new int *[p];
	for (int i = 0; i < p; i++)
	{
		arr[i] = new int [q];
		for (int j = 0; j < q; j++)
		{
			cin >> arr[i][j];
		}
	}
}


void C::show_data(void)
{
	cout << "The Result array elements are: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	A a;
	B b;
	C c;
	a.get_data();
	b.get_data();
	verify_n_multiply(a, b, c);
}

