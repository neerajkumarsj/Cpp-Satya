/*
	Topic :Binary Operator Overloading Using Memeber Function
	=========================================================
	Program: To add to complex numbers
*/

#include <iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
	public:
		Complex(){}
		Complex(float x, float y)
		{
			real = x;
			imag = y;
		}
		void display(void)
		{
			cout << "The result is: " << real << " + " << imag << "i" << endl;
		}
		friend Complex operator+(Complex A, Complex B);

};

Complex operator+(Complex A, Complex B)
{
	Complex temp;
	temp.real = A.real + B.real;
	temp.imag = A.imag + B.imag;
	return temp;
}

int main()
{
	Complex A, B, C;
	A = Complex(10, 20);
	B = Complex(1, 2);
	C = A + B;
	//C = A.operator+(B)

	C.display();
}
