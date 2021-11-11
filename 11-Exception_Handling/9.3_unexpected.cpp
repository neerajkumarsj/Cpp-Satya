/*
	List Of Exceptions
	==================
		1. Exceptions in no Exception Function 
*/
#include  <iostream>
#include <stdlib.h>
using namespace std;

class POSITIVE{};

class NEGATIVE{};

class ZERO{};
void my_unexpected(void)
{
	cout << "My Unexpected Handler is Invoked" << endl;
	exit(1);
}

void check_sign(int num) throw () //(POSITIVE, NEGATIVE)
{
	if (num > 0)
	{
		int *ptr = new int[10];
		throw POSITIVE();
	}

	else if (num < 0)
	{
		throw NEGATIVE();
	}

	else
	{
		//Unspecified Exception
		throw ZERO();
	}
}

int main()
{
	int num;
	cout << "Enter the Input: " << endl;
	cin >> num;
	cout << "Size of NEGATIVE: " << sizeof(NEGATIVE) << endl;
	set_unexpected(my_unexpected);
	try
	{
		check_sign(num);	
	}
	catch(POSITIVE)
	{
		cout << "PositiveException: Caught" << endl;
	}
	catch(NEGATIVE)
	{
		cout << "NegativeException: Caught" << endl;
	}
	catch(ZERO)
	{
		cout << "ZeroException: Caught" << endl;
	}
	
}
