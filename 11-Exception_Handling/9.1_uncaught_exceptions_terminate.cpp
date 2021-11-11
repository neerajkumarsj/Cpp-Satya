/*
	Handling Uncaught Exceptions: terminate()
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Exception_A{};

class Exception_B{};

void my_terminate(void)
{
	cout << "My Terminate is Invoked: " << endl;
	exit(1);
}

int main()
{
	set_terminate(my_terminate); //Registering To the kernel
	try
	{
		cout << "Throwing UNcaught Exception: \n";
		throw Exception_B();
	}
	catch (Exception_A)
	{
		cout << "Catched Exception_A" << endl;
	}

	cout << "This Line will not be executed" << endl;
}

