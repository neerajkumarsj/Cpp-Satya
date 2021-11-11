/*
	Topic: Testing For Errors
	=========================
	ifstream --> reading from file
	ofstream --> input to file
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	char filename[20], ch;
	cout << "Enter the File name: " ;
	cin >> filename;

	ifstream ifile(filename);
	if (!ifile)
	{
		cerr << "Error: " << filename << endl;
		return 1;
	}
	
	ifile >> resetiosflags(ios::skipws);
	while (ifile)
	{
		ifile >> ch;
		cout << ch;
	}
	return 0;
}
