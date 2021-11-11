/*
	FIle Pointers And their Manipulation
	------------------------------------------
	FInding the File size using Seekg and Tellg

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream infile(argv[1]);
	if (!infile)
	{
		cerr << "Error Openi: " << argv[1] << endl;
		return 1;
	}
	
	//        current 0: Begining, 1: curent location 2: end [2, ios::start];
	infile.seekg(0, ios::end);
	cout << "File Size: " << infile.tellg() << endl;
}
