/*
Topics:
1. Pass by Value
2. Pass by Address
3. Pass by Reference
*/

#include <iostream>
using namespace std;

void swap_by_value(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_by_address(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_by_ref(int & x, int & y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 3, b = 5;

	//swap_by_value(a, b);
	//swap_by_address(&a, &b);
	swap_by_ref(a, b);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}
