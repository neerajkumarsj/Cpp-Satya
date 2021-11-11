/*
	Topic: Operations on Files using COnstructors
	=============================================
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20];
	int age;
	ofstream fout("sample.txt");
	cout << "Enter the name and age: ";
	cin >> name >> age;
	fout << name << endl << age << endl;
}
