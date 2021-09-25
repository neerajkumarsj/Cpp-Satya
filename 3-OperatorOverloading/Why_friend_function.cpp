/*
	Topic :Why friend function is needed, if both member function and friend function does the same job?
	=========================================================
	Program:    - Overloading * 
				- Overloading >>
				- Overloading <<
*/

#include <iostream>
using namespace std;

class Multiply
{
	private:
		float a;
		float b;
	public:
		Multiply(){}
		Multiply(float x, float y)
		{
			a = x;
			b = y;
		}
		void display(void)
		{
			cout << "The result is: " << a << b << endl;
		}
		friend Multiply operator*(Multiply A, Multiply B);

};

Multiply operator*(Multiply A, float B)
{
	Multiply temp;
	temp.a = A.a * B;
	temp.b = A.b * B;
	return temp;
}

int main()
{
	Mulitply A, B, C;
	A = Multiply(10, 20);
	B = Multiply(1, 2);
	//C = A * B;
	//C = A.operator+(B)

	A = B * 2.0;
	A = 2.0 * B;
	//A = 2.0.operator*(B)
	//A = operator*(2.0, B)
	C.display();
}
