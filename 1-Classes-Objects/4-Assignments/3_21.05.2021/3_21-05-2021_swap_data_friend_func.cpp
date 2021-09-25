#include <iostream>
using namespace std;

class One;

class Two
{
	private:
		int b;
	public:
		friend class One;
		void get_data(void);
		void swap(One x, Two y);
};

class One
{
	private:
		int a;
	public:
		void get_data(void);
		friend void Two::swap(One x, Two y);
};

void One::get_data(void)
{
	cout << "Enter the First Number: ";
	cin >> a;
	cout << endl;
}

void Two::get_data(void)
{
	cout << "Enter the Second Number: ";
	cin >> b;
	cout << endl;
}

void Two::swap(One x, Two y)
{
	x.a = x.a + y.b;
	y.b = x.a - y.b;
	x.a = x.a - y.b;

	cout << "Swapped numbers: First: "<< x.a <<"\t Second: " << y.b << endl;
}

int main()
{
	One A;
	Two B;
	A.get_data();
	B.get_data();
	B.swap(A, B);
}
