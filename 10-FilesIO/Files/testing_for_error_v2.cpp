/*
	Topic: Testing For Errors
	Version 2
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

	ofstream ofile(filename);
	if (!ofile)
	{
		cerr << "Error: " << filename << endl;
		return 1;
	}
	
	while (cin)
	{
		cin.get(ch);
		ofile << ch << flush;
		//Buffer Size 4096 Bytes
	}

	ofile.close();
	return 0;
}
