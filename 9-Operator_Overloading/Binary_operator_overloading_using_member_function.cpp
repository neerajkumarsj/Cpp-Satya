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
		Complex operator+(Complex B)
		{
			Complex temp;
			temp.real = real + B.real;
			temp.imag = imag + B.imag;
			return temp;
		}
		void display(void)
		{
			cout << "The result is: " << real << " + " << imag << "i" << endl;
		}
};

int main()
{
	Complex A, B, C;
	A = Complex(10, 20);
	B = Complex(1, 2);
	C = A + B;
	//C = A.operator+(B)

	C.display();
}
