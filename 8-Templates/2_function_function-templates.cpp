/*
	Topic: Function, Function Templates
	===================================

*/

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T max_t(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

char *max_t(char *a, char *b)
{
	if (strcmp(a, b) > 0)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	cout << max_t("Neeraj", "Kumar") << endl;
	cout << max_t(20, 10) << endl;
}
