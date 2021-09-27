/*
	Topic: Generic Programming With Templates
	=========================================

*/

#include <iostream>
using namespace std;
#if 0
void swap(char &x, char &y)
{
	char temp = x;
	x = y;
	y = temp;
}


void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}


void swap(float &x, float &y)
{
	float temp = x;
	x = y;
	y = temp;
}
#endif
template <class T>
void swap_xy(T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

int main()
{
	char c1 = 'A', c2 = 'B';
	int i1 = 10, i2 = 25;

	swap_xy(c1, c2);
	cout << "Values: " << c1 << "\t" << c2 << endl;
	swap_xy(i1, i2);
	cout << "Values: " << i1 << "\t" << i2 << endl;
}
