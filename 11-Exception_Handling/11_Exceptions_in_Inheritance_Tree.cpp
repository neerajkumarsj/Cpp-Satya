/*
	Exceptions in Inheritance Tree
*/

#include <iostream>
using namespace std;

class WRONG_AGE{};
class Father
{
	protected:
		int f_age;
	public:
		Father(int a)
		{
			if (a < 0)
				throw WRONG_AGE();
			f_age = a;
		}

		virtual int get_age(void)
		{
			return f_age;
		}
};

class Son: public Father
{
	protected:
		int s_age;
	public:
		Son(int a, int b):Father(a)
		{
			if (b >= a)
				throw WRONG_AGE();
			s_age = b;
		}

		virtual int get_age(void)
		{
			return s_age;
		}
};

int main()
{
	int father_age, son_age;
	Father *bptr;
	cout << "Enter Age of Father: ";
	cin >> father_age;

	try
	{
		bptr = new Father(father_age);
	}
	catch(WRONG_AGE)
	{
		cout << "Error: Father's Age is less than 0" << endl;
		return -1;
	}

	cout << "Father's Age: " << bptr->get_age() << endl;
	delete bptr;
	cout << "Enter Age of Son: ";
	cin >> son_age;

	try
	{
		bptr = new Son(father_age, son_age);
	}
	catch(WRONG_AGE)
	{
		cout << "Error: Son's Age is greater than Father's age" << endl;
		return -1;
	}

	cout << "Son's Age: " << bptr->get_age() << endl;
	delete bptr;
}
