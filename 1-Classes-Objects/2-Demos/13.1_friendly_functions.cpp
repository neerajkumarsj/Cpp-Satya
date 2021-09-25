/*
Topic: Friendly Functions

1. 
class A
{
	private:
		float salary;
		:
	public:
		friend income_tax();
		:
};

class B
{
	private:
		float salary;
		:
	public:
		friend income_tax();
		:
};

income_tax()
{
	:
}

Let A = Manager, B = Scientist

Income Tax

*/

#include <iostream>

using namespace std;

class Sample
{
	private:
		int a; 
		int b;
	public:
		void get_data(int x, int y)
		{
			a = x;
			b = y;
		}
		friend int multiply(Sample);	
};

//Friend function, independent
int multiply(Sample A)
{
	return A.a * A.b;
}

int main()
{
	Sample A;
	A.get_data(10, 20);
	cout << "Product: " << multiply(A) << endl;
}






































