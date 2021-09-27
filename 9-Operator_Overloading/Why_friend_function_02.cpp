/*
	Topic :Why friend function is needed, if both member function and friend function does the same job?
	=========================================================
	Program:    - Overloading * 
				- Overloading >>
				- Overloading <<
				Example: Vector = 10, 20, 30, 40, 50
						 Scalar = 2
						--------------------------------
						Resultant=20, 40, 60, 80, 100
*/

#include <iostream>
using namespace std;
const int size = 5;

class Vector
{
	private:
		int v[size];
	public:
		Vector()
		{
			for (int i = 0; i < size; i++)
			{
				v[i] = 0;	
			}
		}
		Vector(int *C)
		{
			for (int i = 0; i < size ; i++)
			{
				v[i] = C[i];
			}
		}
		Vector operator*(int x)
		//Vector operator*(Vector x)
		{
			
			Vector temp;
			for (int i = 0; i < size ; i++)
			{
				temp.v[i] = v[i] * x ;
			}
			return temp;
			
		}
		friend Vector operator*(int x, Vector B);
		void display(void)
		{
			for (int i = 0; i < size ; i++)
			{
				cout << v[i] << "\t" ;
			}
			cout << endl;
		}
};
/*
Vector operator*(Vector B, int x)
{
	Vector temp;
	for (int i = 0; i < size ; i++)
	{
		temp.v[i] = B.v[i] * x ;
	}
	return temp;
}
*/
Vector operator*(int x, Vector B)
{
	Vector temp;
	for (int i = 0; i < size ; i++)
	{
		temp.v[i] = B.v[i] * x ;
	}
	return temp;
}


int main()
{
	int C[size] = {10, 20, 30, 40, 50};
	Vector A;		//Default Constructor will be invoked
	Vector B = C;	//Copy Constructor will be invoked
	Vector P, Q;
	//P = B * 2;
	P = 2 * B;
	P.display();
}
