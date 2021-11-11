/*
	Topic: Operations on Files Explicitly
	=====================================
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20];
	int age;
	ofstream fout;
	fout.open("sample.txt");
	cout << "Enter the name and age: ";
	cin >> name >> age;
	fout << name << endl << age << endl;
	fout.close();

	ifstream fin;
	fin.open("sample.txt");
	fin >> name >> age;
	cout << "Name: " << name << " Age: " << age << endl;
}
