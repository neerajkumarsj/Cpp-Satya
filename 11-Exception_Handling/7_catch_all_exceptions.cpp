/*
	List Of Exceptions
	==================
		1. Raising an Unspecified Exception
		2. 
*/
#include  <iostream>
using namespace std;

class POSITIVE{};

class NEGATIVE{};

class ZERO{};

void check_sign(int num) throw (POSITIVE, NEGATIVE, ZERO)
{
	if (num > 0)
	{
		throw POSITIVE();
	}

	else if (num < 0)
	{
		throw NEGATIVE();
	}

	else
	{
		throw ZERO();
	}
}

int main()
{
	int num;
	cout << "Enter the Input: " << endl;
	cin >> num;
	
	try
	{
		check_sign(num);	
	}
	catch(...)
	{
		cout << "Exception: Caught" << endl;
	}
	
}
