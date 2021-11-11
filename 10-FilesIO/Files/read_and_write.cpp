/*
	Read and Write

*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a = 234, aa;
	float b = 12.25, bb;

	ofstream ofile("num.bin", ios::binary);
	ofile.write((char *)&a, sizeof(a));
	ofile.write((char *)&b, sizeof(b));
	ofile.close();

	ifstream ifile("num.bin", ios::binary);
	ifile.read((char *)&aa, sizeof(aa));
	ifile.read((char *)&bb, sizeof(bb));
	ifile.close();

	cout << aa << "\t" << bb << endl;

}
