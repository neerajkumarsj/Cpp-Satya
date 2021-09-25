/*
Topic: How to make one entire class as the friend to another class.
*/

#include <iostream>

using namespace std;

class One; //Forward declaration

class Two
{
	private:
		int s;
	public:
		friend class One; //One class as a friend to another
		void sum(One x);
		void put_sum(void);
};

class One
{
	private:
		int a;
		int b;
	public:
		void get_data(int x, int y);
		friend void Two::sum(One);
};

void One::get_data(int x, int y)
{
	a = x;
	b = y;
}

void Two::sum(One x)
{
	s = x.a + x.b;
}

void Two::put_sum(void)
{
	cout << "Sum: " << s << endl;
}

int main()
{
	One A;
	A.get_data(10, 20);
	Two B;
	B.sum(A);
	B.put_sum();
}





