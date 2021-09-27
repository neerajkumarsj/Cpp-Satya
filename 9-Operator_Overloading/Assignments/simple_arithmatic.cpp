/*
	1. Operator Overloading - Simple Arithmatic Calculater
	======================================================
*/

#include <iostream>
using namespace std;

class Operand
{
	private:
		int op;
	public:
		Operand()
		{
			op = 0;	
		}
		Operand(int x)
		{
			op = x;
		}
		void output(void)
		{
			cout << "The Updated Value is: " << op << endl;
		}
		friend Operand operator+(Operand A, Operand B);
		friend Operand operator-(Operand A, Operand B);
		friend Operand operator*(Operand A, Operand B);
		friend Operand operator/(Operand A, Operand B);
};

Operand operator+(Operand A, Operand B)
{
	return A.op + B.op;
}

Operand operator-(Operand A, Operand B)
{
	return A.op - B.op;
}

Operand operator*(Operand A, Operand B)
{
	return A.op * B.op;
}

Operand operator/(Operand A, Operand B)
{
	return A.op / B.op;
}

int main()
{
	int a, b;
	char ch;
	cout << "Enter the Values: " << endl;
	cin >> a >> b;
	cout << "Enter the Operator: " << endl;
	cin >> ch;
	
	Operand A(a), B(b), C;
	switch(ch)
	{
		case '+':
			C = A + B;
			C.output();
			break;

		case '-':
			C = A - B;
			C.output();
			break;

		case '*':
			C = A * B;
			C.output();
			break;

		case '/':
			C = A / B;
			C.output();
			break;

	}
}
