/*
	Memory allocation failure exception
*/

#include <iostream>
using namespace std;

int main()
{
	int *data;
	long unsigned int size;

	cout << "Enter the no. of bytes to allocate: ";
	cin >> size;

	try
	{
		data = new int[size];
		cout << "Memory Allocation Succeeded: " << endl;
	}
	catch(bad_alloc)
	{
		cout << "Could'nt Allocate Memory: Allocation FAiled" << endl;
		return -1;
	}
}
