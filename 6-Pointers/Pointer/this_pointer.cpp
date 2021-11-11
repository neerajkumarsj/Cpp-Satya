/*
	Topic: This POinter
	===================

*/


#include <iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int imag;

	public:
		Complex(){}
		Complex(int a, int b)
		{
			real = a;
			imag = b;
		}
		Complex add(Complex B)
		{
			real = this->real + B.real;
			imag = this->imag + B.imag;
			//return Complex(real, imag);
			return *this;
		}
		void putData(void)
		{
			cout << real << " + i" << imag << endl;
		}
};

int main()
{
	Complex A(10, 20);
	Complex B(30, 40);
	Complex C = A.add(B);
	C.putData();
}


