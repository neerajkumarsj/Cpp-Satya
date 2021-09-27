/*
	Topic: Class template with Operator Overloading
	===============================================
*/

#include <iostream>
using namespace std;

template <class T>
class Complex
{
	T real;
	T imag;
	public:
		Complex(){}
		Complex(T x, T y)
		{
			real = x;
			imag = y;
		}
		Complex operator + (Complex B);
		void putData(void)
		{
			cout << real << "+ i" << imag << endl;
		}
};

template <class T>
Complex<T> Complex<T>::operator + (Complex<T> B)
{
	Complex<T> temp;
	temp.real = real + B.real;
	temp.imag = imag + B.imag;
	return temp;
}

int main()
{
	Complex<int> A(10, 20);
	Complex<int> B(30, 40);
	Complex<int> C;

	C = A + B;
	C.putData();
}

