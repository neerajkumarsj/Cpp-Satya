#include <iostream>

using namespace std;

int main()
{
	//Declaring the pointer
	int *ptr;

	//Declare the size var
	int size;

	//Prompt + Read the size
	cout << "Enter the size of an array: ";
	cin >> size;

	//Allocate the memory for array
	ptr = new int[size];

	cout << "Memory alloacted successfully\n";

	delete []ptr;

	cout << "Allocated memory deleted successfully\n";


	ptr = NULL; // To avoid ptr becoming dangling

	return 0;

}

