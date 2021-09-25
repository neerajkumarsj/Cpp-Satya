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

class Sample; //Forward Declaration

class Item
{
	private:
		int a;
	public:
		void get_data(int x)
		{
			a = x;
		}
		friend int add(Item I, Sample S);
};

class Sample
{
	private:
		int b;
	public:
		void get_data(int x)
		{
			b = x;
		}		
		friend int add(Item I, Sample S);
};

int add(Item I, Sample S)
{
	return I.a + S.b;
}

int main()
{
	Item A;
	A.get_data(10);
	Sample B;
	B.get_data(20);
	cout << "a + b: " << add(A, B) << endl;
}





































