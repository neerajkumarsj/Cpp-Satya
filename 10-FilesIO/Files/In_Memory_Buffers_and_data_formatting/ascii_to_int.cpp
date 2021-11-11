/*
	Ascii to Int => istrstream
	Int to Ascii => ostrstream
*/

#include <iostream>
#include <strstream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0, num;
	for (int i = 1; argv[i]; i++)
	{
		istrstream arg(argv[i]);
		arg >> num;
		sum += num;
	}

	cout << "Value: " << sum << endl;
}
